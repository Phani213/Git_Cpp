#include <iostream>
#include<string>
using namespace std;

template <class D1, class D2, class D3> //Multiple parameters
class example_MP
{
public:
    D1 Data1;
    D2 Data2;
    D3 Data3;
    void Entries(D1 a, D2 b, D3 c)
    {
        Data1 = a;
        Data2 = b;
        Data3 = c;
    }
    void Display()
    {
        cout << Data1 << endl
             << Data2 << endl
             << Data3 << endl;
    }
};
int main()
{
    example_MP<int, string, float> name1;
    name1.Entries(1, "Sai Phanindra", 2.16);
    name1.Display();
    return 0;
}