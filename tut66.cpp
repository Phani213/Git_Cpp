#include <iostream>
#include<string>
using namespace std;

template <class D1=int, class D2=float, class D3 = char> //Default Parameters
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
    example_MP<> name1;
    name1.Entries(1, 2.16,'S');
    name1.Display();
    cout<<endl;
    example_MP<int, string, float> name2;
    name2.Entries(1, "Sai Phanindra", 2.16);
    name2.Display();
    return 0;
}