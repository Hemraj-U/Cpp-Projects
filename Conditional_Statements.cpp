#include<iostream>
using namespace std;
void usingIfstatement(int a, int b){     //function
   if(a > b){
   	cout << a << endl;
   }
}

void usingIf_else_statement(int a, int b){   //function
	if(a > b){
		cout << a << endl;
	}
	else{
		cout << b << endl;
	}
}

void usingIf_else_else_if_statement(int a, int b, int c){  //function
	if(a > b && a > c){
		cout << a << endl;
	}
	else if(b > c && b > a){
		cout << b << endl;
	}
	else if(c > a && c > b){
		cout << c << endl;
	}
}

void usingNested_if_statement(int a, int b, int c){   //function
	if(a > b){
		if( a > c){
			cout << a << endl;
		}
		else{
			cout << c << endl;
		}
	}
	if( b > c){
		if( b > a)
		cout << b << endl;
	}
	else{
		cout << c << endl;
	}
}

void usingSwitch_case(int n){       // function
	switch(n){
		case 1: cout << "Monday" << endl; break;
		case 2: cout << "Tuesday" << endl; break;  
		case 3: cout << "Wednesday" << endl; break;
		case 4: cout << "Thursday" << endl;  break;
		case 5: cout << "Friday" << endl; break;
		case 6: cout << "Saturday" << endl; break;
		case 7: cout << "Sunday" << endl; break;
		default: cout << "Invalid Number" << endl; break;
	}
}
int main(){                                      // actual parameter              /*       " " " "
//	usingIfstatement(10, 5);                                                              " " " "
//    usingIf_else_statement(40, 30);                                                function call   
//    usingIf_else_else_if_statement(100, 40, 300);                                *       " " " " 
//      usingNested_if_statement(100, 40, 30);                                           " " " " 
//      usingSwitch_case(1);                                                      */      

 
    int n;        // asign the value 
    int choice;   // asingn the choic value
    
    cout << "1. check for even number" << endl; 
    cout << "2. check for odd number" << endl; 
    cout << "3. Exit" << endl;
    
    cout << "Enter the choice" << endl; //input choice number from user
    cin >> choice;
    
    switch(choice){
    	case 1: 
    	  cout << "Enter the number: ";  //input the value to check the condition
    	  cin >> n;
    	  if(n % 2 != 1){
    	  	cout << "even";
		  }
		  cout<< " " << endl;
		case 2:
			cout << "Enter the number: "; //here also same 
			cin >> n;
			if(n % 2 != 0){
				cout << "odd";
			}
			
		case 3:
			default:
				break;
	}
	return 0;
}
