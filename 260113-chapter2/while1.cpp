#include <iostream>
using namespace std;

// while 문을 이용한 구구단 출력 프로그램 
int main(){
	int n;
	int i = 1;
	
	cout << "출력하고 싶은 구구단: ";
	cin >> n;
	
	while(i<=9){
		cout << n << "*" << i <<"=" << n*i << endl;
		i++;
	}
	return 0;
}
