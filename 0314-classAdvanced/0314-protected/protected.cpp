#include <iostream>
using namespace std;

class Parent {
private:
	string privateValue = "�����̺�";
protected:
	string protectedValue = "������Ƽ��";
public:
	string publicValue = "�ۺ�";
};

class Child : protected Parent {
public:
	void showValues() {
		cout << publicValue << endl;
		cout << protectedValue << endl;
		cout << privateValue << endl;
	}
};


int main() {
	Child c1;
	c1.publicValue;
	c1.protectedValue;
	c1.privateValue;
}