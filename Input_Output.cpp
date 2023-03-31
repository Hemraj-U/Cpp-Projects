#include<iostream>
using namespace std;

int main(){
	int a;
	float b;
	char ch;
	string str;
	
	cout << " Integer " << endl;
    cout << "Enter the number: " << endl;
    cin >> a;
    cout << a << endl;
    
    cout << "\n Floating point" <<endl;
    cout << "Enter decimal number: " << endl;
    cin >> b;
    cout << b << endl;
    
    cout << "\n Character" << endl;
    cout << "Enter the character" << endl;
    cin >> ch;
    cout << ch << endl;
    
    cout << "\n String" << endl;
    cout<< "\n Enter the string: " << endl;
    cin >> str;
    cout<< str << endl;
    
    cout<< " \n To print entire sentence " << endl;
    cout << "Enter the string " << endl;
//    cin.ignore(numeric_limits<streamsize>::max(),'\n'); //clearing the buffer stream
    cin >> str;
    getline(cin, str); //getline function is used to store entire string
    cout<< str << endl;
    
              //OR
    
    cout<< " \n To print entire sentence " << endl;
    cout << "Enter the string " << endl;
    cin >> str;
    getline(cin, str, '$'); // '$' specifies the untill the '$' is triggered the output will keep on going
    cout<< str << endl;
    
    //Manipulators
    cout<< "Manipulators" << endl;
    string s = "Hemraj";
    cout << s << endl;
    cout << setw(10) << setfill('#'); //setw(sets the width of length)
    cout << s << endl;
    cout << left << 5 << endl;
    cout << right << 5 << endl;
    
    return 0;
}
