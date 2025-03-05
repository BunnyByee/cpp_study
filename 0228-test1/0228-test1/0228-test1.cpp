#include <iostream>
#include <bitset>
using namespace std;

int main() {
	// 1. 특정 비트 추가
	int num = 0b00010010;
	num |= (1 << 5);
	cout << bitset<8>(num) << endl;
	// cout << bitset<8>(num | 0b00100000) << endl;

	// 2. 특정 비트 제거
	int num2 = 0b10101111;
	num2 & ~(1 << 2);
	cout << bitset<8>(num2) << endl;
	//cout << bitset<8>(num2 ^ 0b00000100) << endl;

	// 3. 특정 비트 반전
	int num3 = 0b11011010;
	num3 ^= (1 << 4);
	cout << bitset<8>(num3) << endl;
	//cout << bitset<8>(num3 ^ 0b00010000) << endl;

	// 4. 특정 비트값 추출, 4번째 비트값 추출
	int num4;
	cin >> num4;
	bool isSet = (num4 & (1 << 4));
	cout << isSet << endl;
	/*string str = to_string(num4); 이거는 10진수로 변환이됨 그래서 오류가 남*/ 

	// 5. 짝수/홀수 판별
	int num5;
	cin >> num5;
	bool isOdd = (num5 & 1);
	cout << (isOdd ? "홀수" : "짝수") << endl;

	// 6. 2의 거듭제곱 판별 >> 이걸 어케 반복문을 안쓰지..??
	int num6;
	cin >> num6;
	bool isPowerOfTwo = num6 & (num6 - 1);
	cout << (isPowerOfTwo ? "아님" : "2의 거듭제곱") << endl;
}