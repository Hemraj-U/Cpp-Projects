#include<iostream>
using namespace std;

//Function declaration: return_type functionname(formal parameters);
void greeting();
bool isLeapYear(int);

//Function defination
void greeting(){
	cout<< "Hello!" << endl;
}

bool isLeapYear(int year){
	if(year%100 == 0){
		if(year%400 == 0)
		return true;
		else
		return false;
	}
	else if(year%4 == 0){
		return true;
	}
	else
	return false;
}

void checkIfLeapYear(int year){ //function 
    if(isLeapYear(year)){
    	cout << year << " Is a leap year!" << endl;
	}
	else{
		cout << year << " Is not a leap year!" << endl;
	}	
}

int main(){
	
	int year = 2000;
	greeting();  //function call
	checkIfLeapYear(year); //function call
	return 0;
	
}
