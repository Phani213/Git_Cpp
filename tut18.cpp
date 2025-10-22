#include<iostream>
using namespace std;

//recurssion and recursive functions

int fib(int n){  //recursive cases
    if (n<=2){
        return 1;
    }
    return fib(n-2) + fib(n-1); 
}
int fact(int n){  //recursive cases
    if(n<=1){
        return 1;
    }
    return n * fact(n-1);
}
int main(){
    int a;
    cout<<"enter number "<<endl;
    cin>>a;
    cout<<a<<" is "<<fact(a)<<endl;
    cout<<a<<" is "<<fib(a)<<endl;
    return 0;
}