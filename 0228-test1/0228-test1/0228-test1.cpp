#include <iostream>
#include <bitset>
using namespace std;

int main() {
	// 1. Ư�� ��Ʈ �߰�
	int num = 0b00010010;
	num |= (1 << 5);
	cout << bitset<8>(num) << endl;
	// cout << bitset<8>(num | 0b00100000) << endl;

	// 2. Ư�� ��Ʈ ����
	int num2 = 0b10101111;
	num2 & ~(1 << 2);
	cout << bitset<8>(num2) << endl;
	//cout << bitset<8>(num2 ^ 0b00000100) << endl;

	// 3. Ư�� ��Ʈ ����
	int num3 = 0b11011010;
	num3 ^= (1 << 4);
	cout << bitset<8>(num3) << endl;
	//cout << bitset<8>(num3 ^ 0b00010000) << endl;

	// 4. Ư�� ��Ʈ�� ����, 4��° ��Ʈ�� ����
	int num4;
	cin >> num4;
	bool isSet = (num4 & (1 << 4));
	cout << isSet << endl;
	/*string str = to_string(num4); �̰Ŵ� 10������ ��ȯ�̵� �׷��� ������ ��*/ 

	// 5. ¦��/Ȧ�� �Ǻ�
	int num5;
	cin >> num5;
	bool isOdd = (num5 & 1);
	cout << (isOdd ? "Ȧ��" : "¦��") << endl;

	// 6. 2�� �ŵ����� �Ǻ� >> �̰� ���� �ݺ����� �Ⱦ���..??
	int num6;
	cin >> num6;
	bool isPowerOfTwo = num6 & (num6 - 1);
	cout << (isPowerOfTwo ? "�ƴ�" : "2�� �ŵ�����") << endl;
}