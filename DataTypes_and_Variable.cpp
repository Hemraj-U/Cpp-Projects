#include<iostream>
using namespace std;

//user define data types
cout << "User define data types" << endl;
struct DemoStruct{     //struct is the keyword
	int val1;
	double val2;
};

typedef struct DemoStruct dstruct;   // typedef struct old_datatype_name(DemoStruct) new_datatype_name(dstruct);

//user define class and object
cout << "class and object" << endl;
class Demo{
	string name;
	
	public:
		Demo() {}
		Demo(string ip): name(ip) {}
		
		void printName(){
			cout << "Name is: " << name << endl;
		}
};

typedef Demo dem;  // typedef struct old_datatype_name(DemoStruct) new_datatype_name(dstruct);

int main(){
  
  //primitive data types
  cout<<"primitive data type"<<endl;
  int num = 10;          //has 4 byte space
  int num2;              //has 4 byte space
  char ch = 'a';        //has 1 byte space 
  bool val = false;    //has 1 byte space
  float dec = 11.11;   //has 4 byte space
  double dec2 = 11.11; //has 8 byte space	
  
  //Derived data types
  cout <<"Derived data types" <<endl;
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //array collection of homogenous data 
  int *ptr = &num; // * is pointer --> used to store the address of a memory location
  int& numRef = num; //Reference ---> used as a reference to a variable
  
  // user define data type
  cout << "User define datatype" << endl;
  enum day{
  	Sunday;
  	Monday;
  	Tuesday;
  	Wednesday;
  	Thursday;
  	Friday;
  	Saturday;
  };
  day d = Sunday;
  cout << "Day is: " << d << endl;
  
  // user define data type
  cout << "User define datatype" << endl;
  enum day{
  	Sunday = 1;
  	Monday = 2;           //it can be return like this also
  	Tuesday = 3;
  	Wednesday = 4;
  	Thursday = 5;
  	Friday = 6;
  	Saturday = 7;
  };
  day d = 8;
  cout << "Day is: " << d << endl;
  
  //Creating a variable of the structure
                                              //some times we cannot call such a big name in this case
  dstruct s(0, 1);                            //it can be use typedef keyword to shorten the name
  cout << s.val2 << endl;
  
  //Creating an Object of the class
  dem demoObject("Happy Coding!");           //some times we cannot call such a big name in this case
  //Demo demoObject("Happy Coding!");        //it can be use typedef keyword to shorten the name
  demoObject.printName();                    
  
  return 0;
}
