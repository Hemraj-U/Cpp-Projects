#include<iostream>
using namespace std;
int main()
{
  int a = 21, b = 12;

  cout<<"\n Arithmetic Operator"<< endl;
  cout<< a+b << endl;
  cout<< a-b << endl;
  cout<< a*b << endl;
  cout<< a/b << endl;
  cout<< a%b << endl;
  //During module operation, the sign of the left operand will be the sign
  cout<< a % b<<endl;
  cout<<(-a%b)<<endl;
  cout<<(a%-b)<<endl;
  cout<<(-a%-b)<<endl;
  
  //Logical operation
  cout<< "\n Logical Operator" <<endl;
  cout<< (a > b)<< endl;
  if(a > b){
  	cout<<"a is greater"<<endl;
  }
  else{
  	cout<<"b is greater"<<endl;
  }
  
  //Relational Operators
  cout<< "\n Relational Operator" << endl;
  if(a>b && b!=0){
  	cout<<"Result 1"<<endl;
  }
  else{
  	cout<<"Result 2"<<endl;
  }
  //Bitwise Operator
  cout<< "\n Bitwise Operator"<< endl;
  cout<< (2 | 1) <<endl; //bitwise OR
  cout<< (2 & 1) <<endl; //bitwise AND
  cout<< (2 ^ 1) <<endl; //bitwise X-OR
  cout<< (4 >> 1) <<endl; //swifts all the bits to the left
  cout<< (2 << 1) <<endl; //swifts all the bits to the right
  cout<< (~4) <<endl; //
  
  //Ternary Operator
  //condition ? expression 1: expression 2
  cout<< "\n Ternary Operator"<< endl;
  int c;
  if(a > b){
  	c = a;
  }
  else{
  	c = b;
  }
  
  c = (a > b) ? a : b;
  
  // unary operator
  //++, --;
  cout<<"\n Unary Operator"<<endl;
  a = 1;
  //c has grabage value maybe(0) a has 1. initally it assigns a value to c it becomes 1;
  c = a++; // postIncrement
  cout << c << " " << a << endl;
  
  a = 1;
  c = ++a; //In preIncrement first increments the value then it asigns to the given varialbs
  cout << c << " " << a << endl; 
  
  a = 1;
  c = a--; // postDecrement
  cout << c << " " << a << endl;
  
  a = 1;
  c = --a;// preDecrement
  cout<< c << " " << a << endl;
  
  // Shortcut assignment operator
  //+=, -=, *= etc
  c += a;
  
  //Other operator
  //sizeof, new, delete, &(address of operator), *(dereferencing operator), -> .(arrow and dot operator, relation to structure and union);
  cout<< "\n Other Operator" << endl;
  cout<< sizeof(a) << endl;
  int *ptr = new int(10);
  delete ptr;
  
  ptr = &a;
  b = *ptr;
  
  return 0;
  
}

