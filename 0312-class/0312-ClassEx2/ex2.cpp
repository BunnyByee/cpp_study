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
		cout << "°èÁÂ¹øÈ£: " << accountNumber << endl;
		cout << "ÇöÀç ÀÜ¾×: " << balance << endl << endl;
	}

	void deposit(int amount) {
		balance += amount;
		cout << "ÀÔ±Ý ÈÄ ÀÜ¾×: " << balance << endl;
	}

	void withdraw(int amount) {
		if (amount > balance) {
			cout << "Ãâ±Ý ±Ý¾×ÀÌ ÀÜ¾×º¸´Ù Ä¿¿ä" << endl;
		}
		else {
			balance -= amount;
			cout << "Ãâ±Ý ÈÄ ÀÜ¾×: " << balance << endl;
		}
	}

	~BankAccount() {
		cout << "°èÁÂ »èÁ¦µÊ:[" << accountNumber << "]" << endl;
	}
};

int main() {
	BankAccount b1("1234-56789-10", 50000);
	b1.deposit(50000);
	b1.withdraw(120000);
	b1.withdraw(50000);
}