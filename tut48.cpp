#include<iostream>
using namespace std;

class A{
    protected:
        int data1;
    public:
        A(int a){
            data1 = a;
            cout<<"A class is called"<<endl;
        }
        void print_A(void){
            cout<<"A data is "<<data1<<endl;
        }
};
class B{
    protected:
        int data2;
    public:
        B(int a){
            data2 = a;
            cout<<"B class is called"<<endl;
        }
        void print_B(void){
            cout<<"B data is "<<data2<<endl;
        }
};
class C: public B, public A{
    protected:
        int data1,data2;
    public:
       C(int a1, int a2, int a3, int a4):A(a1),B(a2){
        data1 = a3;
        data2 = a4;
        cout<<"C class is called"<<endl;
       } 
       void Display(void){
        print_A();
        print_B();
        cout<<"C1 data is "<<data1<<endl;
        cout<<"C2 data is "<<data2<<endl;
       }
};

int main(){
    C Nin(1,2,3,4);
    //Nin.print_A();
    //Nin.print_B();
    Nin.Display();
    return 0;
}