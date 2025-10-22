#include<iostream>
//operators
using namespace std;
int main(){
    int a=10,b=20;
    //arithmatic
    cout<<"a + b is "<<a+b<<endl;
    cout<<"a - b is "<<a-b<<endl;
    cout<<"a * b is "<<a+b<<endl;
    cout<<"a / b is "<<a/b<<endl;
    cout<<"a++ is "<<a++<<endl;
    cout<<"a-- is "<<a--<<endl;
    cout<<"++a is "<<++a<<endl;
    cout<<"--a is "<<--a<<endl;

    //comaprison

    cout<<"a==b is "<<(a==b)<<endl;
    cout<<"a!=b is "<<(a!=b)<<endl;
    cout<<"a<=b is "<<(a<=b)<<endl;
    cout<<"a>=b is "<<(a>=b)<<endl;
    cout<<"a<b is "<<(a<b)<<endl;
    cout<<"a>Yb is "<<(a>b)<<endl;

    //logical

    cout<<"And && is "<<((a==b)&&(a<b))<<endl;
    cout<<"Or || is "<<((a==b)||(a<b))<<endl;
    cout<<"Not ! is "<<(!(a==b))<<endl;
    return 0;
}
    
