#include <iostream>
using namespace std;

int main() {
	char a = 255;
	char b = -1;

	string s = "Hello, world~";
	//cout << s;

	/*int myInput;
	cin >> myInput;
	cout << myInput;*/

	string name;
	string age;

	cout << "�̸��� �Է��ϼ���. ";
	cin >> name;
	cout << "���̸� �Է��ϼ���. ";
	cin >> age;
	cout << "�ȳ��ϼ���! " + name + "��(" + age + "��)";
}