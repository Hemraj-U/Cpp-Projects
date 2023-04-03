#include<iostream>
using namespace std;

int main(){
    //syntax:
    //datatype *var_name;
    int a = 10;
    int *ptr = &a; // here '&a' --> is address
    //*ptr --> * this actualy refers to the value present at the memory location point at the pointer
    // cout << *ptr << endl; 
    // cout << a << endl;

    //Dynamic Memory Allocation
    int n = 10;
    ptr = new int(n); // --> (allocate)
    delete []ptr;    //delete keyword --> it deletes address that pointed to ptr (deallocate)
    return 0;
}
/*
Addr 123(ptr); [456]
Addr 456( a ); [ 10]
*/