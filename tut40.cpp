#include <iostream>
using namespace std;
// Multiple level inheritance

class Students
{
protected:
    int subjects;

public:
    void Set_subjects(int p)
    {
        subjects = p;
    }
    void get_subjects()
    {
        cout << "No of Subjects is " << subjects << endl;
    }
};

class marks : public Students
{
protected:
    float Telugu;
    float English;
    float Maths;
    float Science;
    float Social;

public:
    void Set_Marks(float, float, float, float, float);
    void Print_Marks(void);
};

void marks ::Set_Marks(float m1, float m2, float m3, float m4, float m5)
{
    Telugu = m1;
    English = m2;
    Maths = m3;
    Science = m4;
    Social = m5;
}
void marks ::Print_Marks()
{
    cout << "Telugu marks is " << Telugu << endl;
    cout << "English marks is " << English << endl;
    cout << "Maths marks is " << Maths << endl;
    cout << "Science marks is " << Science << endl;
    cout << "Social marks is " << Social << endl;
}

class Pass : public marks
{
    float percentage;

public:
    void Display()
    {
        get_subjects();
        Print_Marks();
        cout << "Percentage of all " << subjects << " subjects are " << (Telugu + English + Maths + Science + Social) / subjects << "%" << endl;
    }
};

int main()
{
    Pass Nin;
    Nin.Set_subjects(5);
    Nin.Set_Marks(66, 96, 98, 90, 70);
    Nin.Display();
    return 0;
}