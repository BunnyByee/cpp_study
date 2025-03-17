#include <iostream>
using namespace std;

class Counter {
private:
	static int count;

public:
	Counter() {
		count++;
	}

	static int getCount() {
		return count; //this는 인스턴스를 가리켜서 안됨.
	}
};

int Counter::count = 0;

int main() {
	Counter c1, c2, c3;

	cout << "객체 수: " << Counter::getCount() << endl;
}