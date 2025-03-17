#include <iostream>
#include <vector>
using namespace std;

class Snack {
	// 모든 간식 공통 속성
protected :
	string productName;
	string company;
	int price;
public :
	Snack(string n, string c, int p)
		: productName(n), company(c), price(p){}

	// 순수 가상 함수로 선언
	virtual void printInfo() = 0;

	// 가상 소멸자
	virtual ~Snack() {}
};

class Candy : public Snack {
private :
	string taste;
public :
	Candy(string n, string c, int p, string t)
		: Snack(n, c, p), taste(t) {
	}

	void printInfo() override {
		cout << "캔디 이름 : " << productName << endl;
		cout << "제작회사 : " << company << endl;
		cout << "맛 : " << taste << endl;
		cout << "가격 : " << price << endl;
	}
};

class Chocolate : public Snack {
private:
	string shape;
public:
	Chocolate(string n, string c, int p, string s)
		: Snack(n, c, p), shape(s) {
	}

	void printInfo() override {
		cout << "초콜릿 이름 : " << productName << endl;
		cout << "제작회사 : " << company << endl;
		cout << "모양 : " << shape << endl;
		cout << "가격 : " << price << endl;
	}
};

int main() {
	vector<Snack*> snacks[4];
	snacks.push_back(new Candy("하리보 프루티부시", "하리보", 2500, "열대과일"));
	snacks.push_back(new Candy("하리보 콜라 젤리", "하리보", 2500, "콜라"));
	snacks.push_back(new Chocolate("키세스", "허쉬", 4500, "동그라미"));
	snacks.push_back(new Chocolate("크런키", "롯데", 1500, "사각형"));

	for (Snack* s : snacks) {
		s->printInfo();
		cout << "-----------" << endl;
	}

	for (Snack* s : snacks) {
		delete s;
	}
}