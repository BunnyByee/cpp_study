#include <iostream>
#include <list>
using namespace std;

int main() {
	list<int> myList = { 1,2,3,4,5 };

	// 리스트에 원소 추가,삭제
	myList.push_back(6);
	myList.push_front(0);

	myList.pop_back();
	myList.pop_front();

	auto it = myList.begin();
	advance(it, 2);
	myList.insert(it, 10);
	/*advance(it, 1);
	myList.erase(it);
	cout << "번거로워요";*/
	myList.remove(5);
	myList.remove_if([](int n) {return n & 2 == 0;});

	list<int> list1 = { 1,2,2,3,2,2,3,3,3,3 };
	list<int> list2 = { 4,5,6 };

	list1.unique(); // 연속된 중복값 제거
	list1.merge(list2); // list1에 list2 병합
	list1.splice(++list1.begin(), list2); // 1번 자리에 list2 넣기

	list<int>::iterator it;
	for (it = list1.begin(); it != list1.end(); it++) {
		cout << *it << " ";
	}

}