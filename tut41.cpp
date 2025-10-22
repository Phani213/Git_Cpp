#include <iostream>
using namespace std;
 //Multiple level inheritance

// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };

class Base1
{
protected:
    int base1int;

public:
    void get_int1(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void get_int2(int a)
    {
        base2int = a;
    }
};

class Derived1 : public Base1, public Base2
{
public:
    void Display()
    {
        cout << "Base 1 is " << base1int << endl;
        cout << "Base 2 is " << base2int << endl;
        cout << "sum is " << base1int + base2int << endl;
        cout << "product is " << base1int * base2int << endl;
    }
};
int main()
{
    Derived1 Sample;
    Sample.get_int1(100);
    Sample.get_int2(88);
    Sample.Display();
    return 0;
}