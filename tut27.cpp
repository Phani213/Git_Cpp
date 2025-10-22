#include<iostream>
using namespace std;


//Friend Classes and member friend functions.

/*As shown in code, a complex class is declared at the top which is known as forward declaration. 
Forward declaration hints to the compiler that this class is declared somewhere forward in the code. 
After that calculator class is defined this consists of three public member functions, “add”, “sumRealComplex”, and “sumCompComplex”. 
The “add” function will add the values of “a” and “b” and return the value. 
The “sumRealComplex” and “sumCompComplex” are taking two objects of the complex class.*/


class Complex;
// Forward declaration
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

/*As shown in a code , a complex class is created which consists of two friend functions “sumRealComplex” and “sumCompComplex” 
of the calculator class. The main thing to note here is that “sumRealComplex” and “sumCompComplex” are the friend functions of complex class 
so they can access all the private members of the complex class.*/
class Complex
{
    int a, b;
    //int a, b;
    // Individually declaring functions as friends
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumCompComplex(Complex, Complex);

    // Aliter: Declaring the entire calculator class as friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o1.printNumber();
    o2.setNumber(5, 7);
    o2.printNumber();
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;
    return 0;
}
