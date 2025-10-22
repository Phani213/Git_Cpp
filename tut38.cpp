#include <iostream>
using namespace std;
// Single Inheritance

class exercise
{
    float hours;

public:
    int days;
    void SetData();
    int getdata1();
    int getData2();
    // void PrintData();
};

void exercise ::SetData()
{
    cin>>hours>>days;  
      //days = 30;
}
int exercise ::getdata1()
{
    return hours;
}
int exercise ::getData2()
{
    return days;
}

class Salary : public exercise
{
    float wage;

public:
    float Gehalt;
    void ProcessData();
    void PrintData();
};

void Salary ::ProcessData()
{
    wage = getdata1() * 17.02;
}
void Salary ::PrintData()
{
    cout << getData2() << " days of salary is " << wage << endl;
}
int main()
{
    Salary nin;
    nin.SetData();
    nin.ProcessData();
    nin.PrintData();
    return 0;
}
