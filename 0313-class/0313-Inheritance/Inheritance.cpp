#include <iostream>
using namespace std;

class Parent {
public :
	string famliyName;

	Parent(string fn) {
		famliyName = fn;
		cout << "부모 클래스 실행" << endl;
	}

	~Parent() {
		cout << "자식 클래스 실행" << endl;
	}
};

class Child : public Parent{
public :
	int age;

	Child(string fn, int myAge) : Parent(fn), age(myAge) {
		cout << "자식 클래스 실행" << endl;
	}

	~Child() {
		cout << "자식 클래스 종료" << endl;
	}
};

int main() {

}