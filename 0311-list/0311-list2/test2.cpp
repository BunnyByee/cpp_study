#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
	list<int> myList = { 5,4,3,4,2,1,1 };

	// 1. 4의 개수
	// 1) 반복문
	int cnt = 0;
	for (int n : myList) {
		if (n == 4) cnt++;
	} cout << "4의 개수: " << cnt << endl;
	
	// 2) count 함수 사용
	cout << "4의 개수: " << count(myList.begin(), myList.end(), 4) << endl;

	// 2. 정렬 후 출력
	myList.sort();
	for (int n : myList) {
		cout << n << " ";
	} cout << endl;
	
	// 3. 연속된 중복값 제거 후 출력
	myList.unique();
	for (int n : myList) {
		cout << n << " ";
	} cout << endl;

	// 4. 6, 7 뒤에 추가
	myList.push_back(6);
	myList.push_back(7);
	for (int n : myList) {
		cout << n << " ";
	} cout << endl;

	// 5. 0 추가
	myList.push_front(0);
	for (int n : myList) {
		cout << n << " ";
	} cout << endl;
}