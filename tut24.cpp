#include <iostream>
using namespace std;

// Static Data members and methods

class employee
{
    int id;
    static int Count;

public:
    void EnterID(void)
    {
        cout << "Enter ID is ";
        cin >> id;
        Count++;
    }
    void DispID(void)
    /* DispID function. This function will take input for “id” from the user at runtime and increment in the count.
    The value of the counter will be incremented by one every time this function will run.*/
    {
        cout << "ID is " << id << endl;
    }
    static void getCount(void)
    /*static “getCount” function. This function will print the value of the variable count”.
    The main thing to note here is that “getCount” function is static, so if we try to access any data members or member functions
    which are not static the compiler will throw an error.*/
    {
        cout << "Counter is " << Count << endl;
    }
};

int employee::Count;
int main()
{
    employee phani, venky, yousef; // objects created for employee class.
    phani.EnterID();
    phani.DispID();
    employee::getCount();
    venky.EnterID();
    venky.DispID();
    employee::getCount();
    yousef.EnterID();
    yousef.DispID();
    employee::getCount();
    /*The functions “EnterID”, “DispID” are called by the objects,
     the function “getCount” is called by using class name and scope resolution operator because it is a static method.*/
    return 0;
}