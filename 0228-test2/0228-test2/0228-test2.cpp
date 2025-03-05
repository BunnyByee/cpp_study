#include <iostream>
using namespace std;

int main() {
	/*int age;
	
	cout << "나이를 입력하세요. ";
	cin >> age;

	if (age >= 200) {
		cout << "나이가 너무 많습니다..!" << endl;
	}
	else if (age > 19) {
		cout << "성인" << endl;
	}
	else if (age > 16) {
		cout << "고등학생" << endl;
	}
	else if (age > 13) {
		cout << "중학생" << endl;
	}
	else if (age > 7) {
		cout << "초등학생" << endl;
	}
	else if (age > 0) {
		cout << "유아" << endl;
	}
	else {
		cout << "나이를 잘못 입력했습니다." << endl;
	}*/

	/*string name;
	cout << "이름을 입력해주세요. ";
	cin >> name;

	if (name == "홍길동") {
		cout << "남자" << endl;
	}
	else if (name == "성춘향") {
		cout << "여자" << endl;
	}
	else {
		cout << "모르겠어요" << endl;
	}*/

	//int number;
	//cout << "숫자를 입력해주세요." << endl;
	//cin >> number;
	//// cout << number << (number % 5 == 0 ? "은 5의 배수 입니다." : "은 5의 배수가 아니네요ㅜㅜ");
	//bool test = (number % 5 == 0);
	//cout << number << (test ? "은 5의 배수 입니다." : "은 5의 배수가 아니네요ㅜㅜ");

	int a, b;
	char c;

	cout << "연산할 정수 두 개를 입력해 주세요.";
	cin >> a >> b;

	cout << "연산자를 입력해주세요. (+ - * /) ";
	cin >> c;

	cout << "**** 연산결과 --->";
	switch (c) {
		case '+' :
			cout << "값:" << (a + b);
			break;
		case '-':
			cout << "값:" << (a - b);
			break;
		case '*':
			cout << "값:" << (a * b);
			break;
		case '/':
			if (b == 0) {
				cout << "0으로 나눌 수 없습니다!";
			}
			else {
				cout << "몫:" << (a / b) << "나머지는 " << (a % b) << "입니다.";
			}
			break;
	}
}	