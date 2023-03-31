#include<iostream>
using namespace std;

void swapNumbers(int a, int b){     // formal parameters
	int temp;
	temp = a;                                          // a=20 ----->moves to temp(temp stores value 20) a is empty
	a = b;                                             // b=10 ----->moves to a(know a stores value 10) b is empty
	b = temp;                                          // temp=20 -----> moves to b(know b stores 20) temp is empty
	cout << a << " " << b << endl;                     // a = 10, b = 20;
}

int main(){
	int a = 11;
	int b = a;
	int &ref = a;
	
	a = a + 1;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "ref: " << ref << endl;
	cout << "-----------" << endl;
	
	a = 11;
	b = a;
	ref = a;
	
	b = b + 1;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "ref: " << ref << endl;
	cout << "-----------" << endl;
	 
//	int x = 10, y = 20;
	swapNumbers(30, 20);      // actual parameters
	return 0;
	
}
