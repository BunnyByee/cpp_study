#include <iostream>
#include <bitset>
using namespace std;

int main() {
	int a = 0b0101; // 5
	int b = 0b1001; // 9
	/*cout << (a & b) << endl;
	cout << bitset<4>(a & b) << endl;

	cout << (a | b) << endl;
	cout << bitset<4>(a | b) << endl;

	cout << (a ^ b) << endl;
	cout << bitset<4>(a ^ b) << endl;*/

	//시프트

	int c = 0b0011;
	/*cout << bitset<4>(c << 1) << endl;
	cout << bitset<4>(c >> 1);*/

	// 특정 비트의 추가와 제거
	int d = 0b1000;
	// 비트 추가
	cout << bitset<4>(d | (1 << 1)) << endl;
	// 비트 제거
	cout << bitset<4>(d & ~(1 << 1)) << endl;
}