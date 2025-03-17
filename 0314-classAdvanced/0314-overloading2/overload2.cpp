#include <iostream>
using namespace std;

class Weight {
public:
	int kg;

	Weight(int w) : kg(w) {};

	Weight* operator+(Weight& other) {
		this->kg += other.kg;
		return this;
	}

	void showWeight() {
		cout << "¸ö¹«°Ô: " << kg << "kg" << endl;
	}
};


int main() {
	Weight w1(100), w2(150);
	(w1 + w2)->showWeight();
}