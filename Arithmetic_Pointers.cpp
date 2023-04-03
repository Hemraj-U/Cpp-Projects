#include<iostream>
using namespace std;

int main(){
	int arr[6] = {0, 1, 2, 3, 4, 5};
	int arr2[2][3] = {{1, 2, 3}, {4, 5, 6}};
	
	cout << arr[1] << endl;
	cout << *(arr + 1) << endl;
	int a = 1;
	int *ptr = &a;
	int **ptr2 = &ptr;

	cout << ptr2 << " " << &ptr << endl;
	cout << *ptr2 << " " << ptr << endl;
	cout << **ptr2 << " " << *ptr << endl;
	return 0;
}
