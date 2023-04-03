#include<iostream>
using namespace std;
  
int sumOfArray(int *arr, int n){
	int sum = 0;
	for(int i=0; i<n; i++){
		sum = sum + *(arr + i);
	}
	return sum;
}

int changeVariable(int n){
	*(n1) ++;
}

int main(){
	int arr[6] = {0, 1, 2, 3, 4, 5};
	int n = 10;
	int *ptr = &n;
	changeVariable(ptr);
//	cout<< sumOfArray(arr, 6) << endl ;
	return 0;
}
