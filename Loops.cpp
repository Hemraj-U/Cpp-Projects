#include<iostream>
using namespace std;

void printUsingFor(int n){  //this is functions
	
/*
   syntax:
   for(expression1; expression2; expression3){
         block of statments
   }
   typically, expression1 is called initialisation
   expression2 is called loop condition
   expression3 is the modification/update statements
*/
   for(int i=1; i<=n; i++){
      cout << i << endl;	
   }
}

void printUsingWhile(int n){  //this is function
	/*
	    syntax:
	    while(condition){
		    block of statements
		}
	*/
	int i = 1;
	while(i <= n){
		cout << i << endl;
		i++;
	}
}

void printUsingDoWhile(int n){ //this is function
    /*
      syntax:
      do {
         block of statements
       } while(condition);
       Note:
           1. The block of statements is executed once
           2. Semicolon after the while condition
    */
    int i = 1;
    do{
    	cout << i << endl;
    	i++;
	} while(i <= n);
}

int main(){
	
	printUsingWhile(100); //function call
	return 0;
}
