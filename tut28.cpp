#include <iostream>
using namespace std;

//More on C++ Friend Functions (Examples & Explanation)
class c2;

class c1
{
    int value1;
    friend void swap(c1 &, c2 &);

public:
    void getVal(int data1)
    {
        value1 = data1;
    }
    void display(void)
    {
        cout << value1 << endl;
    }
};

class c2
{
    int value2;
    friend void swap(c1 &, c2 &);

public:
    void getVal(int data2)
    {
        value2 = data2;
    }
    void display(void)
    {
        cout << value2 << endl;
    }
};

void swap(c1 &x, c2 &y)
{
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}

int main()
{
    c1 d1;
    c2 d2;
    d1.getVal(21);
    cout << " Bevor swap d1 is" << endl;
    d1.display();
    d2.getVal(12);
    cout << " Bevor swap d2 is" << endl;
    d2.display();
    swap(d1, d2);
    cout << " nach swap d1 is" << endl;
    d1.display();
    cout << " nach swap d2 is" << endl;
    d2.display();
    return 0;
}