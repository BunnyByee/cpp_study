#include <iostream>
using namespace std;

class Person {
public:
	string* name;
	int age;

	Person(string name, int age) {
		this->name = new string(name);
		this->age = age;
	}

	// 복사 생성자, other -> 다른 인스턴스
	Person(Person& other) {
		this->name = new string(*other.name);
		this->age = other.age;
	}
	void setAge(int age) {
		this->age = age;
	}
	void showInfo() {
		cout << "이름: " << *name << endl;
		cout << "나이: " << age << endl;
	}
	// 소멸자 : 클래스의 인스턴스가 없어질 때, 소멸자가 시행됨.
	~Person() {
		delete name;
		cout << "Person 클래스 소멸" << endl;
	}
};

int main() {
	Person p1("신짱구",5);
	p1.showInfo();

	Person p2 = p1;
	*p2.name = "김철수";
	p2.showInfo();
}