#include <iostream>
using namespace std;

class Parent {
public :
	string famliyName;

	Parent(string fn) {
		famliyName = fn;
		cout << "�θ� Ŭ���� ����" << endl;
	}

	~Parent() {
		cout << "�ڽ� Ŭ���� ����" << endl;
	}
};

class Child : public Parent{
public :
	int age;

	Child(string fn, int myAge) : Parent(fn), age(myAge) {
		cout << "�ڽ� Ŭ���� ����" << endl;
	}

	~Child() {
		cout << "�ڽ� Ŭ���� ����" << endl;
	}
};

int main() {

}