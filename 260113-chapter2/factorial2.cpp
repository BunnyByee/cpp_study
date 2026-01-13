#include <iostream>
using namespace std;

long factorial(int n);

int main(){
	int x;
	long f;
	
	cout << "정수를 입력하시오: ";
	cin >> x;
	
	f = factorial(x);
	
	cout << x <<"! = " << f << endl;
	
	return 0;
}

long factorial(int n){
	cout << "factorial(" << n<< ")" << endl;
	
	if (n<=1) return 1;
	else return n * factorial(n-1);
}
