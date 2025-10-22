#include<iostream>

using namespace std;

//Pointers

int main(){

    int a =55;
    int* b=&a;
    // & ----- Address of variable
    // * ----- Value of variable
    //int* b ----- using b as point variable by typing *(star) after int.

    cout<<"address of a is "<<&a<<endl;
    cout<<"address of a using pointer variable b is "<<b<<endl;

    cout<<"value at address b is "<<*b<<endl;

    //pointer to pointer

    int** c=&b;
    //  double star(**) after int means creating pointer which holds another pointer data and address.

    cout<<"address of b is "<<&b<<endl;
    cout<<"address of b using pointer is "<<c<<endl;
    cout<<"value at address c is "<<*c<<endl;
    cout<<"value at address value_at(value_at(c)) is "<<**c<<endl;
    return 0;
}