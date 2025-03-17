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
		cout << "»ç¿ëÀÚ ID: " << this->id << endl;
		cout << "ÀÌ¸§: " << this->name << endl << endl;
	}

	static int getTotalUsers() {
		return nextID;
	}

};

int User::nextID = 0;

int main() {
	User u1("½ÅÂ¯±¸");
	User u2("±èÃ¶¼ö");
	User u3("ÇÑÀ¯¸®");

	u1.showinfo();
	u2.showinfo();
	u3.showinfo();

	cout << "ÃÑ »ç¿ëÀÚ ¼ö: " << User::getTotalUsers() << endl;
	return 0;
}