#include <iostream>
using namespace std;

class Car {
private:
	string brand;

public:
	int speed;

	void setBrand(string brand) {
		this->brand = brand;
	}


	// 브랜드를 출력하는 함수 (브랜드를 수정하면 안됨!!)
	void showBrand() const {
		brand = "Hyundai";
		cout << "브랜드: " << brand << endl;
	}
};

int main() {
	const Car c1;
	// c1.setBrand("bmw"); 불가능
	// c1.speed = 100; 불가능
}