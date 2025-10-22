#include<iostream>
#include<iomanip>

using namespace std;

int main(){


    //constants
    const int a= 54; //when write const before int then the variable data can't be changed.
    cout<<"a is "<<a<<endl;

    //manipulators
    int x=123, y=1234, z=12345;
    cout<<"x without setw is "<<x<<endl;
    cout<<"y without setw is "<<y<<endl;
    cout<<"z without setw is "<<z<<endl;

    cout<<"x with setw is "<<setw(5)<<x<<endl; //setw makes spaces and then prints data  
    cout<<"y with setw is "<<setw(5)<<y<<endl;
    cout<<"z with setw is "<<setw(5)<<z<<endl;

    //operator Precedence
    int c=((((x*5)+y)-c)+a); //operators left to right check en.cppreference.com page for more information
    cout<<"C is "<<c<<endl;
    return 0;
}