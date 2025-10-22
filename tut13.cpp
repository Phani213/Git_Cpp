#include<iostream>

using namespace std;

//arrays and pointers arithmetic

int main(){

    int marks[4]={12,13,14,15}; //array
    //cout<<marks[3]<<endl;

    //pointer and arrays 
    int* p=marks;
    cout<<*(p++)<<endl;
    //cout<<*p<<endl;
    cout<<*(++p)<<endl;
    //cout<<"the value of *p is "<<*p<<endl;
    //cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    //cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    //cout<<"the value of *(p+) is "<<*(p+3)<<endl;
    return 0;
} 