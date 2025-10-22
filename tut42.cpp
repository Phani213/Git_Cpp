/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using? -multiple inheritance
    Q2. Which mode of Inheritance are you using? -public mode
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

#include <iostream>
#include <cmath>
using namespace std;

class SimpCalc
{
protected:
    int inp1, inp2;

public:
    void get_inp(int a, int b)
    {
        inp1 = a;
        inp2 = b;
    }
    void printsimp()
    {
        cout << "Sum of 2 input is " << inp1 + inp2 << endl;
        cout << "Subtraction of 2 input is " << inp1 - inp2 << endl;
        cout << "Product of 2 input is " << inp1 * inp2 << endl;
        cout << "Division of 2 input is " << inp1 / inp2 << endl;
    }
};
class SciCalc
{
protected:
    int inp1, inp2;

public:
    void get_inp1(int a, int b)
    {
        inp1 = a;
        inp2 = b;
    }
    void printsimp1()
    {
        cout << "sin of 2 input is " << sin(inp1 + inp2) << endl;
        cout << "cos of 2 input is " << cos(inp1 + inp2)<< endl;
        cout << "tan of 2 input is " << tan(inp1 + inp2) << endl;
        cout << "Division of sin and cos of 2 input is " << cos(inp1 + inp2)/sin(inp1 + inp2) << endl;
    }
};
class HybCalc : public SimpCalc, public SciCalc{};
int main(){
    HybCalc data1;
    data1.get_inp(10,20);
    data1.get_inp1(10,20);
    data1.printsimp();
    data1.printsimp1();
    return 0;
}