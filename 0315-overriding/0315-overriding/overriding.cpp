#include <iostream>
using namespace std;

// 함수의 형태를 정의한 상태 (실체 X)
void add(int a, int b) {
	cout << a + b << endl;
}

// 추상 클래스 -> 인터페이스의 역할, 인스턴스를 가질 수 없음.
class Animal {
public:
	// 가상 함수 : 기본값을 제공하는 형태
	/*virtual void speak() {
		cout << "동물이 소리 냅니다" << endl;
	}*/
	
	// 순수 가상 함수 (추상 메소드) : 구체적인 기능이 없음.
	virtual void speak() = 0;
};

// 오버라이드를 안하면 추상 클래스가 됨. -> 인스턴스를 가질 수 없음.
class Dog : public Animal {
public:
	void speak() override {
		cout << "멍멍" << endl;
	}

	void tailSwing() {
		cout << "꼬리를 흔들어요" << endl;
	}
};

class Dinosaur : public Animal {
public:
	void speak() override {
		cout << "크릉크릉" << endl;
	}
};

int main() {
	//add(10, 2); // 컴파일 시 -> 실체가 생김 (정적 바인딩)

	// Animal a; 오류 발생
	
	Animal* animal = nullptr; // 애니멀 클래스 포인터 변수 생성
	// 포인터를 사용하지 않으면 정적 바인딩이 됨.

	//animal = &dog; // 도그 인스턴스의 주소로 초기화
	//animal->speak();
	// animal->tailSwing(); 
	// Animal 클래스에서는 존재하지 않는 함수라 인식 불가능 

	string choice;
	cin >> choice;

	if (choice == "강아지") { // 선택에 따라 인스턴스 생성
		animal = new Dog();
	}
	else {
		animal = new Dinosaur();
	}
	animal->speak();
	delete animal;
}