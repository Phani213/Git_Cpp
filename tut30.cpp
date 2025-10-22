#include <iostream>
using namespace std;

// video 30 Parameterized and default Costructors in c++

class complex
{
    int a, b;

public:
    complex(int, int); // Constructor declartion

    void printnumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(int x, int y) // ----> This is a default constructor as it takes no parameters
{
    a = x;
    b = y;
}
int main()
{
    complex a(5, 6);             // Implicit call
    complex b = complex(51, 66); // explicit call
    a.printnumber();
    b.printnumber();
    return 0;
}