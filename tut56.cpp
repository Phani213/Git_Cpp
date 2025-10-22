#include <iostream>
using namespace std;

/*
Virtual Functions in C++

A member function in the base class which is declared using virtual keyword is called virtual functions.
They can be redefined in the derived class. 
To demonstrate the concept of virtual functions an example program is shown below*/

/*
But we have used the “virtual” keyword with the “display” function of the base class to make is virtual function so when the display function is called by using the base class pointer 
the display function of the derived class will run because the base class pointer is pointing to the derived class object.*/
class Base_Class
{
public:
    int var_Base;
    virtual void Display()
    {
        cout << "Displaying var_Base is " << var_Base << endl;
    }
};

class Derived_Class : public Base_Class
{
public:
    int var_Derived;
    void Display()
    {
        cout << "Displaying var_Base is " << var_Base << endl;
        cout << "Displaying var_Derived is " << var_Derived << endl;
    }
};

int main()
{
    // Base class Pointer created
    Base_Class *Pointer_Base;
    Base_Class obj_Base;

    // Derived class obj created
    Derived_Class obj_D;

    /*Base class pointer is pointed object of
    derived class but base class pointer cannot be pointed to derived class parameters.*/
    Pointer_Base = &obj_D;

    // giving values and pointer base is calling Display of base class it is called late binding
    Pointer_Base->var_Base = 99;
    
    Pointer_Base->Display();

    // Derived class pointer is created

    return 0;
}