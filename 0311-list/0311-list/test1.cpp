#include <iostream>
#include <list>
using namespace std;

int main() {
	list<int> myList = { 1,2,3,4,5 };

	// ����Ʈ�� ���� �߰�,����
	myList.push_back(6);
	myList.push_front(0);

	myList.pop_back();
	myList.pop_front();

	auto it = myList.begin();
	advance(it, 2);
	myList.insert(it, 10);
	/*advance(it, 1);
	myList.erase(it);
	cout << "���ŷο���";*/
	myList.remove(5);
	myList.remove_if([](int n) {return n & 2 == 0;});

	list<int> list1 = { 1,2,2,3,2,2,3,3,3,3 };
	list<int> list2 = { 4,5,6 };

	list1.unique(); // ���ӵ� �ߺ��� ����
	list1.merge(list2); // list1�� list2 ����
	list1.splice(++list1.begin(), list2); // 1�� �ڸ��� list2 �ֱ�

	list<int>::iterator it;
	for (it = list1.begin(); it != list1.end(); it++) {
		cout << *it << " ";
	}

}