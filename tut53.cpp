#include<iostream>
using namespace std;
/*
‘this’ Pointer in C++

“this” is a keyword that is an implicit pointer. 
“this” pointer points to the object which calls the member function.
 An example program is shown below to demonstrate the concept of “this” pointer.
*/
class A{
    int a;
    public:
        void setData(int a){
            this->a = a;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    A a;
    a.setData(4);
    a.getData();
    return 0;
}
