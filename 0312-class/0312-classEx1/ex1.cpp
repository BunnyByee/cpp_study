#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	void setName(string name) {
		this->name = name;
		// (*this).name = n;
		// 중복명 사용 가능
	}
	void setAge(int age) {
		this->age = age;
	}
	void showInfo() {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
};

int main() {
	Person p1;

	p1.setName("신짱구");
	p1.setAge(5);
	p1.showInfo();
}