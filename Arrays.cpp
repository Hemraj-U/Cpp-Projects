#include<iostream>
using namespace std;
int main(){
	int mark1, mark2, mark3, mark4;
	int arr1[10];
	int arr2[10] = {1, 2, 3};
	int arr3[] = {1, 2, 3, 4};
	
	cout << arr2[2] << endl;
	
	cout<< sizeof(arr1)/sizeof(arr1[0])<<endl;
	
	for(int i=0; i<10; i++){
		cout<<arr2[i];
	}
	
	return 0;
}
