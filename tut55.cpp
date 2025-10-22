#include<iostream>
using namespace std;

class Base_Class{
    public:
        int var_Base;
        void Display(){
            cout<<"Displaying var_Base is "<<var_Base<<endl;
        }
};

class Derived_Class:public Base_Class{
    public:
        int var_Derived;
        void Display(){
            cout<<"Displaying var_Base is "<<var_Base<<endl;
            cout<<"Displaying var_Derived is "<<var_Derived<<endl;
        }
};

int main(){
    //Base class Pointer created 
    Base_Class * Pointer_Base;
    Base_Class obj_Base;

    //Derived class obj created 
    Derived_Class obj_D;

    /*Base class pointer is pointed object of 
    derived class but base class pointer cannot be pointed to derived class parameters.*/
    Pointer_Base =&obj_D;

    //giving values and pointer base is calling Display of base class it is called late binding
    Pointer_Base->var_Base=99;
    Pointer_Base->Display();

    //Derived class pointer is created
    Derived_Class * Pointer_Derived;
    Pointer_Derived = &obj_D;
    Pointer_Derived->var_Derived =78;
    Pointer_Derived->var_Base= 702;
    Pointer_Derived->Display();

    return 0;
}