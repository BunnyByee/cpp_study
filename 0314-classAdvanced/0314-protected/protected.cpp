#include <iostream>
using namespace std;

class Parent {
private:
	string privateValue = "프라이빗";
protected:
	string protectedValue = "프로텍티드";
public:
	string publicValue = "퍼블릭";
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