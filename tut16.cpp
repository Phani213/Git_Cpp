#include<iostream>

using namespace std;

//Call by reference and and call by values


// Call by reference using pointers
void swapPointer(int* a, int* b){ //temp a b
    int temp = *a;          //4   4  5   
    *a = *b;               //4   5  5
    *b = temp;            //4   5  4 
}

// Call by reference using using C++ variables 
void swapReferenceVar(int &a, int &b){    //temp a b
    int temp = a;          //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}


int main(){
    int x =4, y=5;
    int a =12, b=21;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapReferenceVar(x, y); //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    swapPointer(&a, &b); //This will swap a and b using reference variables
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl; 
    return 0;
}