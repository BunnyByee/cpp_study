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

	//����Ʈ

	int c = 0b0011;
	/*cout << bitset<4>(c << 1) << endl;
	cout << bitset<4>(c >> 1);*/

	// Ư�� ��Ʈ�� �߰��� ����
	int d = 0b1000;
	// ��Ʈ �߰�
	cout << bitset<4>(d | (1 << 1)) << endl;
	// ��Ʈ ����
	cout << bitset<4>(d & ~(1 << 1)) << endl;
}