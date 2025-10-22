// OOPs --Classes and Objects
// C++ --> intially called C with classes by Stroustroup
// Class --> extension of structures (in C)
// Structure had limitations
// ----> Members are public
// ----> No methods
// classes = Structures + more
// classes --> Can have methods and properties
// classes --> Can make few members as private and few as public
// Structures in C++ are typedefed.
// You can declare objects along with the class declartion like this:
/* Class Employee{
    //Class defination
    }name1,name2;*/
// name1.salary=8 makes no sense if salary is private

// nesting of member functions

#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    // void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter Binary number is " << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0); // After printing exit the code at 0
        }
    }
}

void binary ::ones_compliment(void)
{
    chk_bin(); // Nesting the Function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "New Binary Member is " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    binary n;
    n.read();
    //n.chk_bin();
    n.ones_compliment();
    n.display();
    return 0;
}