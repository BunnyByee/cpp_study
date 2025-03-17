#include <iostream>
#include <string>
using namespace std;

class Chatbot {
public :
	virtual void respond(string message) = 0;
	virtual ~Chatbot(){}
};

class CustomerSupportBot : public Chatbot {
public:
	void respond(string message) override {
		cout << "[��������] ������ ���Ǹ� ó���մϴ�:" << message << endl;
	}
};

class WeatherBot : public Chatbot {
public:
	void respond(string message) override {
		cout << "[������] ���� ���� ������ �����մϴ�:" << message << endl;
	}
};

int main() {
	int choice;
	string userMessage;

	cout << "� ê���� ����Ͻðڽ��ϱ�?" << endl;
	cout << "1. �� ������" << endl;
	cout << "2. ������" << endl;
	cout << "����� �ƹ� ���ڸ� �Է��ϼ���." << endl;
	cout << "�Է�: ";
	cin >> choice; // �Է� �� '\n' ����
	cin.ignore();

	cout << "����� ����: ";
	getline(cin, userMessage);

	Chatbot* cbot = nullptr;
	switch (choice) {
	case 1:
		cbot = new CustomerSupportBot();
		break;
	case 2:
		cbot = new WeatherBot();
		break;
	default:
		cout << "�Է��� �߸��ؼ� �׳� �⺻����" << endl;
		cbot = new CustomerSupportBot();
	}

	cbot->respond(userMessage);

	delete cbot;
	return 0;
}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Chatbot {
//protected:
//	string message;
//public:
//	void getMessage(string message) {
//		this->message = message;
//	}
//
//	virtual void respond() = 0;
//	virtual ~Chatbot() {}
//};
//
//class CustomerSupportBot : public Chatbot {
//public:
//	CustomerSupportBot() {
//		cout << "���� ������ �Է����ּ���(����� ���Ḧ �Է��ϼ���): ";
//	}
//
//	void respond() override {
//		cout << "������ ���Ǹ� ó���մϴ�:" << message << endl;
//	}
//};
//
//class WeatherBot : public Chatbot {
//public:
//	WeatherBot() {
//		cout << "���ϴ� ������ �Է����ּ���(����� ���Ḧ �Է��ϼ���): ";
//	}
//	void respond() override {
//		cout << "���� ���� ������ �����մϴ�:" << message << endl;
//	}
//};
//
//int main() {
//	int choice;
//	cout << "� ê���� ����Ͻðڽ��ϱ�?" << endl;
//	cout << "1. �� ������" << endl;
//	cout << "2. ������" << endl;
//	cout << "����� �ƹ� ���ڸ� �Է��ϼ���." << endl;
//	cout << "�Է�: ";
//	cin >> choice;
//	cin.ignore();
//
//	Chatbot* cbot = nullptr;
//	switch (choice) {
//	case 1:
//		cbot = new CustomerSupportBot();
//		break;
//	case 2:
//		cbot = new WeatherBot();
//		break;
//	default:
//		cout << "ê�� ����� �����մϴ�." << endl;
//		break;
//	}
//
//	while (true) {
//		string m;
//		getline(cin, m);
//
//		if (m == "����") {
//			cout << "ê�� ����� �����մϴ�." << endl;
//			break;
//		}
//
//		cbot->getMessage(m);
//		cbot->respond();
//		cout << "�߰� ���� ������ �ִٸ� �Է����ּ���: ";
//	}
//
//	delete cbot;
//	return 0;
//}