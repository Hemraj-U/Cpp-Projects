//Call By Value and Call By Reference
//-----------------------------------
#include<iostream>
using namespace std;
int sum(int a, int b){
	int c = a + b;
	return c;
}

// call by reference using pointers
int swapPointer(int* a, int* b){  // * points address of memory location
	int temp = *a;
	    *a = *b;
	    *b = temp;
}

//call by reference Using c++ reference variables
int swapReferencevar(int &a, int &b){  // * points address of memory location
	int temp = a;
	a = b;
	b = temp;
}
int main(){
	int x = 10, y = 20;
	int m = 2, n = 1;
//	cout<< "The sum of " << x << " and " << y << " is: " <<sum(x, y);

//  call by reference using ponter reference: 
    swapPointer(&x, &y);
    cout << x << " " << y << endl;
	
//call by reference using c++ reference:
    swapReferencevar(m, n);	 
    cout << m << " " << n << endl;
	return 0;
}
