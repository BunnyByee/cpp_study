#include <iostream>
using namespace std;

int main() {
	/*int age;
	
	cout << "���̸� �Է��ϼ���. ";
	cin >> age;

	if (age >= 200) {
		cout << "���̰� �ʹ� �����ϴ�..!" << endl;
	}
	else if (age > 19) {
		cout << "����" << endl;
	}
	else if (age > 16) {
		cout << "����л�" << endl;
	}
	else if (age > 13) {
		cout << "���л�" << endl;
	}
	else if (age > 7) {
		cout << "�ʵ��л�" << endl;
	}
	else if (age > 0) {
		cout << "����" << endl;
	}
	else {
		cout << "���̸� �߸� �Է��߽��ϴ�." << endl;
	}*/

	/*string name;
	cout << "�̸��� �Է����ּ���. ";
	cin >> name;

	if (name == "ȫ�浿") {
		cout << "����" << endl;
	}
	else if (name == "������") {
		cout << "����" << endl;
	}
	else {
		cout << "�𸣰ھ��" << endl;
	}*/

	//int number;
	//cout << "���ڸ� �Է����ּ���." << endl;
	//cin >> number;
	//// cout << number << (number % 5 == 0 ? "�� 5�� ��� �Դϴ�." : "�� 5�� ����� �ƴϳ׿�̤�");
	//bool test = (number % 5 == 0);
	//cout << number << (test ? "�� 5�� ��� �Դϴ�." : "�� 5�� ����� �ƴϳ׿�̤�");

	int a, b;
	char c;

	cout << "������ ���� �� ���� �Է��� �ּ���.";
	cin >> a >> b;

	cout << "�����ڸ� �Է����ּ���. (+ - * /) ";
	cin >> c;

	cout << "**** ������ --->";
	switch (c) {
		case '+' :
			cout << "��:" << (a + b);
			break;
		case '-':
			cout << "��:" << (a - b);
			break;
		case '*':
			cout << "��:" << (a * b);
			break;
		case '/':
			if (b == 0) {
				cout << "0���� ���� �� �����ϴ�!";
			}
			else {
				cout << "��:" << (a / b) << "�������� " << (a % b) << "�Դϴ�.";
			}
			break;
	}
}	