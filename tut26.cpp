#include<iostream>
using namespace std;

//Friends Function

/*Example 
complex number is 12 + 2i
complex number is 5 + 6i
complex number is 17 + 8i
*/

class complex
{
    int a, b;

public:
    void SetData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    //Below line means that non member - setDatabySum function is allowed to do anything with my private data(members)
    friend complex setDatabySum(complex o1, complex o2);
    void printNumber()
    {
        cout << "complex number is " << a << " + " << b << "i" << endl;
    }
};

complex setDatabySum(complex o1, complex o2)
    {
        complex o3;
        o3.SetData((o1.a + o2.a),(o1.b + o2.b));
        return o3;
    }

int main()
{
    complex v1, v2, v3;
    v1.SetData(12, 2);
    v1.printNumber();

    v2.SetData(5, 6);
    v2.printNumber();

    v3 = setDatabySum(v1, v2);
    v3.printNumber();
    return 0;
}

/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/