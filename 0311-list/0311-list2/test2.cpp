#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
	list<int> myList = { 5,4,3,4,2,1,1 };

	// 1. 4�� ����
	// 1) �ݺ���
	int cnt = 0;
	for (int n : myList) {
		if (n == 4) cnt++;
	} cout << "4�� ����: " << cnt << endl;
	
	// 2) count �Լ� ���
	cout << "4�� ����: " << count(myList.begin(), myList.end(), 4) << endl;

	// 2. ���� �� ���
	myList.sort();
	for (int n : myList) {
		cout << n << " ";
	} cout << endl;
	
	// 3. ���ӵ� �ߺ��� ���� �� ���
	myList.unique();
	for (int n : myList) {
		cout << n << " ";
	} cout << endl;

	// 4. 6, 7 �ڿ� �߰�
	myList.push_back(6);
	myList.push_back(7);
	for (int n : myList) {
		cout << n << " ";
	} cout << endl;

	// 5. 0 �߰�
	myList.push_front(0);
	for (int n : myList) {
		cout << n << " ";
	} cout << endl;
}