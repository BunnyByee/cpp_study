#include <iostream>
using namespace std;

class Vehicle {
protected:	
	int speed;
public :
	string brand;
	Vehicle(string b, int s): brand(b), speed(s) {}

	void showInfo() const {
		cout << "브랜드명: " << brand << ", 속도: " << speed << "km/h" << endl;
	}
};

class Car : public Vehicle {
private :
	int persons;

public :
	Car(string n, int p, int s) : persons(p), Vehicle(n, s){}

	void showPersons() const {
		cout << "승객수: " << persons << "명" << endl;
	}
};
 
class Truck : public Vehicle {
private:
	int volumes;

public:
	Truck(string n, int v, int s) : volumes(v), Vehicle(n, s) {}

	void showVolumes() const {
		cout << "적재 용량: " << volumes << "ton" << endl;
	}
};

int main() {
	Car c1("기아", 5, 100);
	c1.showInfo();
	c1.showPersons();

	Truck t1("현대", 10, 90);
	t1.showInfo();
	t1.showVolumes();
}