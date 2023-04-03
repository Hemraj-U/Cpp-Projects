#include<iostream>
using namespace std;

int main(){
    int arr[6] = {0, 1, 2, 3, 4, 5};
    char str[10] = {'D', 'e', 'v', 't', 'o', 'w', 'n'};
    int a = 10;

    int *ptr = arr;
    char *s;

    // cout << *ptr << endl;

    // cout << sizeof(ptr) << endl;
    // cout << sizeof(s) << endl;
   
    // ptr = ptr + 2;           //arithmetic 
    // cout << ptr << endl;
    ptr = &arr[2];
    // cout << *(ptr) << endl;  //Subtraction
    cout << (ptr - arr) << endl;
    return 0;
}