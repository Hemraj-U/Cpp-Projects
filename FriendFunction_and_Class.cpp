#include<iostream>
using namespace std;

/*
   Friend!
   Friend Class
   Friend Function
       - global friend function
       - a friend function thai is memeber function
*/

class A{
    int a;

    public:
    A(){
       a = 0;
    }

    A(int a): a(a){}

    void modifyA(){
        a = a + 11;
    }

    void showA(){
        cout << "A: " << a << endl;
    }
    friend class B;
};

class B{
    int b;

    public: 
    B(){
        b = 0;
    }

    B(int b): b(b) {}

    void modifyB(){
        b = b + 10;
    }

    void modifyAUsingB(A &obj){
        cout << "A using B: " << obj.a << endl;
        obj.a = obj.a + 100;
    }

    void createAndModifyNewA(){
        A obj(21);
        obj.showA();
        cout << obj.a << endl;
    }
};

class C;
class D {

    public:
    void dIncrementsC(C &obj);
};

class C{
    int c;

    public: 
    C(): c(0) {}
    C(int c): c(c) {}
    void showC(){
        cout << c << endl;
    }

    friend void increment(C &obj);
    friend void D::dIncrementsC(C &obj);
};

void increment(C &obj){
    cout << obj.c+10 << endl;
}

void D::dIncrementsC(C &obj){
    obj.c = obj.c + 100;
}

int main(){
    // A obj(11);
    // B obj2(10);
    // obj.showA();
    // obj2.modifyAUsingB(obj);
    // obj.showA();

    C obj(100);
    D obj2;
    obj.showC();
    obj2.dIncrementsC(obj);
    obj.showC();
    // increment(obj);
}