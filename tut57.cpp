#include <iostream>
using namespace std;

// Virtual Functions example
class applications
{
protected:
    int Num;
    string Company_name;

public:
    applications(string c, int n)
    {
        Company_name = c;
        Num = n;
    }

    virtual void Display(){}
};
class DEapplications : public applications
{
protected:
    int acceptance, rejections;

public:
    DEapplications(string c, int n, int a, int r) : applications(c, n)
    {
        acceptance = a;
        rejections = r;
    }
    void Display()
    {
        if (acceptance == 1 && rejections == 0)
        {
            cout <<Company_name<<" Company and number is " << Num;
            cout << " application is accepted for interview" << endl;
        }
        else
        {
            cout <<Company_name<<" Company and number is " << Num;
            cout << " application is rejected for interview" << endl;
        }
    }
};
class ENapplications : public applications
{
protected:
    int ENacceptance, ENrejections;

public:
    ENapplications(string c, int n, int Ea, int Er) : applications(c, n)
    {
        ENacceptance = Ea;
        ENrejections = Er;
    }
    void Display()
    {
        
        if (ENacceptance == 1 && ENrejections == 0)
        {
            cout <<Company_name<<" Company and number is " << Num;
            cout << " application is accepted for interview" << endl;
        }
        else
        {
            cout <<Company_name<<" Company and number is " << Num;
            cout << " application is rejected for interview" << endl;
        }
    }
};
int main()
{
    string name;
    int DEja, DEnein, numbers;
    int Eja, Enein;
    // DEApplications
    name = "Reply";
    DEja = 1;
    DEnein = 0;
    numbers = 2;
    DEapplications thirdcom(name, numbers, DEja, DEnein);
    // ENapplications
    name = "EDAG";
    Eja = 1;
    Enein = 0;
    numbers = 1;
    ENapplications seconcom(name, numbers, Eja, Enein);

    applications *apps[2];
    apps[0] = &thirdcom;
    apps[1] = &seconcom;
    apps[0]->Display();
    apps[1]->Display();
    return 0;
}

/*
Rules for virtual functions

    They cannot be static
    They are accessed by object pointers
    Virtual functions can be a friend of another class
    A virtual function in the base class might not be used.
    If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/