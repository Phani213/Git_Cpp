#include <iostream>
using namespace std;

int counter = 0;
/*

Destructor in C++

A destructor is a type of function which is called when the object is destroyed. 
Destructor never takes an argument nor does it return any value. 
An example program to demonstrate the concept of destructors in C++ is shown below.

*/
class consdes{
public:
    consdes(){
        counter++;
        cout<<"number"<<counter<<endl;
    }
    ~consdes(){
        cout<<"number"<<counter<<endl;
        counter--;
    }
};
/*
    1st global variable “count” is initialized.

    2nd we created a “num” class.

    3rd default constructor of the “num” class is defined which has no parameters and does increment in the variable “count” and prints its value. 
    The main thing to note here is that every time the new object will be created this constructor will run.
    
    4th destructor of the “num” class is defined. 
    The destructor prints the value of the variable “count” and decrement in the value of “count”. 
    The main thing to note here is that every time the object has been destroyed this destructor will run.
*/
int main(){
    cout<<"Main Function"<<endl;
    cout<<"Creating object1"<<endl;
    consdes c1;
    {
        cout<<"creating three more objects"<<endl;
        consdes c2,c3,c4;
        cout<<"exit the block"<<endl;
    }
    cout<<"Back to Main Code"<<endl;
    return 0;
}