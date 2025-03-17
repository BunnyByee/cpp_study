#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
private :
	T1 first;
	T2 second;

public :
	Pair(T1 f, T2 s) : first(f), second(s) {}

	void show() {
		cout << "first : " << first << endl;
		cout << "second: " << second << endl;
	}

	T1 getFirst() {
		return first;
	}
	
	T2 getSecond() {
		return second;
	}

	void setFirst(T1 first) {
		this->first = first;
	}

	void setSecond(T2 second) {
		this->second = second;
	}

};
int main() {
	Pair <int, double> p1(10,10.0);
	p1.show();

	p1.setFirst(20);
	p1.getFirst();

	p1.setSecond(3.14);
	p1.getSecond();
}