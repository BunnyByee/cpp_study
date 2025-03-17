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
		cout << "[고객지원봇] 고객지원 문의를 처리합니다:" << message << endl;
	}
};

class WeatherBot : public Chatbot {
public:
	void respond(string message) override {
		cout << "[날씨봇] 현재 날씨 정보를 제공합니다:" << message << endl;
	}
};

int main() {
	int choice;
	string userMessage;

	cout << "어떤 챗봇을 사용하시겠습니까?" << endl;
	cout << "1. 고객 지원봇" << endl;
	cout << "2. 날씨봇" << endl;
	cout << "종료는 아무 숫자를 입력하세요." << endl;
	cout << "입력: ";
	cin >> choice; // 입력 뒤 '\n' 남음
	cin.ignore();

	cout << "사용자 질문: ";
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
		cout << "입력을 잘못해서 그냥 기본으로" << endl;
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
//		cout << "문의 사항을 입력해주세요(종료는 종료를 입력하세요): ";
//	}
//
//	void respond() override {
//		cout << "고객지원 문의를 처리합니다:" << message << endl;
//	}
//};
//
//class WeatherBot : public Chatbot {
//public:
//	WeatherBot() {
//		cout << "원하는 지역을 입력해주세요(종료는 종료를 입력하세요): ";
//	}
//	void respond() override {
//		cout << "현재 날씨 정보를 제공합니다:" << message << endl;
//	}
//};
//
//int main() {
//	int choice;
//	cout << "어떤 챗봇을 사용하시겠습니까?" << endl;
//	cout << "1. 고객 지원봇" << endl;
//	cout << "2. 날씨봇" << endl;
//	cout << "종료는 아무 숫자를 입력하세요." << endl;
//	cout << "입력: ";
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
//		cout << "챗봇 사용을 종료합니다." << endl;
//		break;
//	}
//
//	while (true) {
//		string m;
//		getline(cin, m);
//
//		if (m == "종료") {
//			cout << "챗봇 사용을 종료합니다." << endl;
//			break;
//		}
//
//		cbot->getMessage(m);
//		cbot->respond();
//		cout << "추가 질문 사항이 있다면 입력해주세요: ";
//	}
//
//	delete cbot;
//	return 0;
//}