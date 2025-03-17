#include <iostream>
using namespace std;

// c스타일
typedef struct Point {
	int x;
	int y;
} PointAlias;

// c++
struct Address {
	string city;
	string street;
};

// 구조체 안에 구조체 가능!
struct Person {
	string name;
	int age;
	Address address;

	// C++은 멤버 함수도 선언 가능
	void doit() {
		cout << name << "은(는) 낮잠 자는 중입니다." << endl;
	}
};
using P = Person; // 별칭 지정

int main() {
	Person p1;
	p1.name = "신짱구";
	p1.age = 5;
	p1.address = {"초록구", "떡잎마을"};

	Person p2 = { "봉미선", 29, {"초록구", "떡잎마을"} };

	P* ptr = &p1;
	cout << (*ptr).name << endl;
	cout << ptr->name << endl;
	cout << ptr->address.street << endl;

	/*p1.doit();
	p2.doit();*/

	/*cout << "P1" << endl;
	cout << "이름: " << p1.name << endl;
	cout << "주소: " << p1.address << endl;
	cout << "나이: " << p1.age << endl;

	cout << "P2" << endl;
	cout << "이름: " << p2.name << endl;
	cout << "주소: " << p2.address << endl;
	cout << "나이: " << p2.age << endl;*/


}