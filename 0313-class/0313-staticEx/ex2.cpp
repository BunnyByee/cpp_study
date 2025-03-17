#include <iostream>
using namespace std;

class User {
private:
	static int nextID;
	int id;
	string name;

public:
	User(string userName) {
		id = ++nextID; // nextID = nextID + 1
		name = userName;
	}

	void showinfo() {
		cout << "����� ID: " << this->id << endl;
		cout << "�̸�: " << this->name << endl << endl;
	}

	static int getTotalUsers() {
		return nextID;
	}

};

int User::nextID = 0;

int main() {
	User u1("��¯��");
	User u2("��ö��");
	User u3("������");

	u1.showinfo();
	u2.showinfo();
	u3.showinfo();

	cout << "�� ����� ��: " << User::getTotalUsers() << endl;
	return 0;
}