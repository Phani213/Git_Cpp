#include<iostream>
#include<string>
using namespace std;
template <class var1> //templates for functions
void swapp(var1 &A, var1 &B){
    var1 Dummy = A;
    A=B;
    B=Dummy;
}

int main(){
    string A="Sai", B="Phanindra";
    swapp(A,B);
    cout<<A<<endl<<B;
    return 0;
}

