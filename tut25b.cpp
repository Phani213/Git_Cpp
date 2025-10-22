#include <iostream>
using namespace std;

// passing objects as functions

/* Objects can be passed as function arguments. This is useful when we want to assign the values of a passed object to the current object.
An example program to demonstrate the concept of passing an object as a function argument is shown below.*/

/*we created a complex class that has integer “a” variable and “b” integer variable as private class members;
and “setData” void function, “setDataBySum” void function, and “printNumber” void function as public class members.
These functions are explained below. We have defined a “setData” function.
In this function the values are assigned to the variables “a” and “b” because they are private data members of the class and values cannot be assigned directly.
We have defined a “setDataBySum” function. In this function, the values of two objects are added and then assigned to the variables “a” and “b”.
We have defined a “printNumber” function. In this function, the values of the variable “a” and “b” are being printed.*/
class complexx
{
    int a, b;

public:
    void SetData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDatabySum(complexx o1, complexx o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber()
    {
        cout << "complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complexx v1, v2, v3;
    v1.SetData(12, 2);
    v1.printNumber();

    v2.SetData(5, 6);
    v2.printNumber();

    v3.setDatabySum(v1, v2);
    v3.printNumber();
    return 0;
}