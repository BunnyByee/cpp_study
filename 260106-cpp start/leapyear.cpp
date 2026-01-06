#include <iostream>
using namespace std;

int main(){
	int year;
	bool result;
	
	cout << "연도를 입력하시오: ";
	cin >> year;
	
	result = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
	cout.setf(cout.boolalpha);
	cout << result << endl;
	
	return 0;
}
