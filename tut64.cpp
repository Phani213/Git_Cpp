#include <iostream>
using namespace std;

template <class NIN>
class vector1
{
public:
    NIN *arr;
    int size;
    vector1(int a)
    {
        size = a;
        arr = new NIN[size];
    }
    NIN dotproduct(vector1 &v)
    {
        NIN d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector1<int> v1(3);
    v1.arr[0] = 21;
    v1.arr[1] = 12;
    v1.arr[2] = 11;
    vector1<int> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 2;
    v2.arr[2] = 3;
    int a = v1.dotproduct(v2);
    cout << a << endl;

    vector1<float> v3(3);
    v3.arr[0] = 2.1;
    v3.arr[1] = 1.52;
    v3.arr[2] = 1.51;
    vector1<float> v4(3);
    v4.arr[0] = 1.5;
    v4.arr[1] = 2.15;
    v4.arr[2] = 3.55;
    float b = v3.dotproduct(v4);
    cout << b << endl;
    return 0;
}