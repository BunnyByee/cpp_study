#include <iostream>
using namespace std;

class BankAccount {
private :
	string accountNumber;
	int balance;

public:
	BankAccount(string accountNumber, int balance) {
		this->accountNumber = accountNumber;
		this->balance = balance;
		cout << "���¹�ȣ: " << accountNumber << endl;
		cout << "���� �ܾ�: " << balance << endl << endl;
	}

	void deposit(int amount) {
		balance += amount;
		cout << "�Ա� �� �ܾ�: " << balance << endl;
	}

	void withdraw(int amount) {
		if (amount > balance) {
			cout << "��� �ݾ��� �ܾ׺��� Ŀ��" << endl;
		}
		else {
			balance -= amount;
			cout << "��� �� �ܾ�: " << balance << endl;
		}
	}

	~BankAccount() {
		cout << "���� ������:[" << accountNumber << "]" << endl;
	}
};

int main() {
	BankAccount b1("1234-56789-10", 50000);
	b1.deposit(50000);
	b1.withdraw(120000);
	b1.withdraw(50000);
}