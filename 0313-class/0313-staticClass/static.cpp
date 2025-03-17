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
		return count; //this�� �ν��Ͻ��� �����Ѽ� �ȵ�.
	}
};

int Counter::count = 0;

int main() {
	Counter c1, c2, c3;

	cout << "��ü ��: " << Counter::getCount() << endl;
}