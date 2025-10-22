#include <iostream>
using namespace std;



//distance between two points using square root
class point
{
    int x, y;

public:
    point(int a, int b) //parameterized constructor
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
};
int main()
{
    point p(5, 6);
    p.display();
    point q(51, 61);
    q.display();
    return 0;
}