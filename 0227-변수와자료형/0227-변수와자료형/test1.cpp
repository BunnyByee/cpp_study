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

	cout << "이름을 입력하세요. ";
	cin >> name;
	cout << "나이를 입력하세요. ";
	cin >> age;
	cout << "안녕하세요! " + name + "님(" + age + "세)";
}