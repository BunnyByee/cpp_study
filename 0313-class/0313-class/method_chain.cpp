#include <iostream>
using namespace std;

class Person {
private :
	string name;
public :
	// �޼��� ü�̴� ����
	Person* setName(string name) {
		this->name = name;
		// (*this).name = name;
		return this; // ���� ��ü�� ������ ��ȯ
	}

	void showName() {
		cout << "�̸�: " << this->name << endl;
	}
};


int main() {
	Person p1;
	p1.setName("��¯��")->showName(); // �޼��� ü�̴� Ȱ��
	
	// �޸𸮸� ���� �Ҵ��ϰ� �����ϰ� ������
	Person* p2 = new Person(); // �������� ����
	p2->setName("��ö��");
	p2->showName();
	delete p2; // ���� �Ҵ�� ��ü ����
}