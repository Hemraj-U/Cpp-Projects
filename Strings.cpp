#include<iostream>
#include<string.h>   //------> important 
using namespace std;

void replaceBlankWithChar(string &str, char ch){
	int n;
	while((n = str.find(' ', n)) != string::npos){
		str[n] = ch;
	}
}

int main(){
	 
	// c - strings
//	char arr[100] = "Hello1";
//	char arr2[100] = "Hello4";
//	
//	//initialized below is not allowed in c++ anymore
//	char *arr3 = "New string"; // remember * is pointer
//	
//	cout << strlen(arr) << endl;  //prints length of array strlen and strcmp are string.h class
//	cout << strcmp(arr, arr2) << endl; //compare arr to arr2 // c string always ends with the null character
//	
//	cout << arr3 << endl;
//	
//	for(char ch: arr){
//		cout << (int)ch <<endl;
//		if(int)ch == 0) break;
//		//the ASCII value for '\0' is indeed 0.

//----------------------------------------------------------------------------//
//------C++ Strings -----------------------------------------------------------//

    string s;
    getline(cin, s);                // input the string in output window
    
    cout << "s before: " << s << endl;
    cout << s.length() << endl;
    
    s.push_back('!');
    cout << "s after: " << s << endl;
    cout << s.length() << endl;
    
    cout << s.substr(1, 3) << endl;
    string s2(s, 2, 2);
    cout << "s2: " << s2 << endl;
    
    int pos = s.find('a');
    if(pos == string::npos){
    	cout << "Not Found" << endl;
	}
	else{
		cout << "Found: " << pos << " , " << s.at(pos) << endl;
	}
	
	cout << s.compare(s2) << endl;
	cout << s + s2 << endl;
	s.append(s2);
	cout << s << endl;
	
	return 0;
	
}

