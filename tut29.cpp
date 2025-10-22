#include <iostream>
using namespace std;

// video 29 Costructors in c++

/*Constructors in C++

A constructor is a special member function with the same name as the class. The constructor doesn’t have a return type. 
Constructors are used to initialize the objects of its class. Constructors are automatically invoked whenever an object is created.

Important Characteristics of Constructors in C++

    1. A constructor should be declared in the public section of the class
    2. They are automatically invoked whenever the object is created
    3. They cannot return values and do not have return types
    4. It can have default arguments
    5. We cannot refer to their address
*/
class complexx
{
    int a, b;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created

    complexx(void); // Constructor declartion

    void printnumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complexx ::complexx(void) // ----> This is a default constructor as it takes no parameters
{
    a = 10;
    b = 20;
    cout << "Hello world\n";
}
int main()
{
    complexx a1;
    a1.printnumber();
    return 0;
}

