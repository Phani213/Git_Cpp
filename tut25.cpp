#include <iostream>
using namespace std;

// array of objects and passing objects as function arguments in c++.

/* An array of objects is declared the same as any other data-type array.
An array of objects consists of class objects as its elements.
If the array consists of class objects it is called an array of objects.
An example program to demonstrate the concept of an array of objects is shown below.*/

class Employee
{
    int id;
    float salary;

public:
    void setId(void)
    {
        salary = 17.02;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

/* we created an array “fb” of size “4” which is of employee data-type.
The “for” loop is used to run “setId” and “getId” functions till the size of an array.
The main thing to note here is that the objects can also be created individually
but it is more convenient to use an array if too many objects are to be created.*/
int main()
{
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}