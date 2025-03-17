#include <iostream>
using namespace std;

class Person {
private :
	string name;
public :
	// 메서드 체이닝 구현
	Person* setName(string name) {
		this->name = name;
		// (*this).name = name;
		return this; // 현재 객체의 포인터 반환
	}

	void showName() {
		cout << "이름: " << this->name << endl;
	}
};


int main() {
	Person p1;
	p1.setName("신짱구")->showName(); // 메서드 체이닝 활용
	
	// 메모리를 직접 할당하고 삭제하고 싶을때
	Person* p2 = new Person(); // 동적으로 생성
	p2->setName("김철수");
	p2->showName();
	delete p2; // 동적 할당된 객체 해제
}