#include <iostream>
using namespace std;

class Parent {
public:
	string familyName;
	
	Parent(string fn) { // 매개변수가 있는 생성자
		familyName = fn;
		cout << "부모 클래스 실행" << endl;
	}

	void showFamilyName() {
		cout << "우리 집안의 성씨: " << familyName << endl;
	}

	~Parent() {
		cout << "부모 클래스 종료" << endl;
	}
};

class Child : public Parent {
public:
	int age;

	// 부모 클래스의 생성자를 명시적으로 호출
	Child() : Parent("박"), age(20) {
		// Parent()
		cout << "자식 클래스 실행" << endl;
	}

	~Child() {
		cout << "자식 클래스 종료" << endl;
		// ~Parent()
	}
};


int main() {
	Child c1;
	c1.familyName = "김";
	c1.showFamilyName();
}