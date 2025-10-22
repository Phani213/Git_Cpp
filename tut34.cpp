#include <iostream>
using namespace std;

class Number{
    int a;
public:
    Number(){}
    Number(int b){
         a =b;
    }
    //Copy Constructor
    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &address1){
        cout<<"Copy Constructor called!!!!!"<<endl;
        a = address1.a;
    }

    void print1(){
        cout<<"Number is "<<a<<endl;
    }
};
int main(){
    Number a1,a2,a3(50),c;
    a1.print1();
    a2.print1();
    a3.print1();

    Number b(a3); //Copy Constructor is called.
    b.print1();

    c = a3; //Copy Constructor is not called.
    c.print1();

    Number D =a3;  //Copy Constructor is called.
    D.print1();
    return 0;
}