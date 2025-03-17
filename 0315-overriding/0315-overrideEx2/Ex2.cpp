#include <iostream>
#include <vector>
using namespace std;

class Snack {
	// ��� ���� ���� �Ӽ�
protected :
	string productName;
	string company;
	int price;
public :
	Snack(string n, string c, int p)
		: productName(n), company(c), price(p){}

	// ���� ���� �Լ��� ����
	virtual void printInfo() = 0;

	// ���� �Ҹ���
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
		cout << "ĵ�� �̸� : " << productName << endl;
		cout << "����ȸ�� : " << company << endl;
		cout << "�� : " << taste << endl;
		cout << "���� : " << price << endl;
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
		cout << "���ݸ� �̸� : " << productName << endl;
		cout << "����ȸ�� : " << company << endl;
		cout << "��� : " << shape << endl;
		cout << "���� : " << price << endl;
	}
};

int main() {
	vector<Snack*> snacks[4];
	snacks.push_back(new Candy("�ϸ��� ����Ƽ�ν�", "�ϸ���", 2500, "�������"));
	snacks.push_back(new Candy("�ϸ��� �ݶ� ����", "�ϸ���", 2500, "�ݶ�"));
	snacks.push_back(new Chocolate("Ű����", "�㽬", 4500, "���׶��"));
	snacks.push_back(new Chocolate("ũ��Ű", "�Ե�", 1500, "�簢��"));

	for (Snack* s : snacks) {
		s->printInfo();
		cout << "-----------" << endl;
	}

	for (Snack* s : snacks) {
		delete s;
	}
}