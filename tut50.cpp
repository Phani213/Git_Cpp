#include <iostream>
using namespace std;

int main()
{
    int a = 45;
    int *ptr1 = &a;

    cout << "Address of a is " << ptr1 << endl;
    cout << "Data at address is" << *(ptr1) << endl;

    //New keyword.
    float *p = new float(40.78);
    cout << "The address of p is " << p << endl;
    cout << "The value at address p is " << *(p) << endl;

    char *c = new char('S');
    cout << "The address of c is " << &c << endl;
    cout << "The value at address p is " << *(c) << endl;

    int *arr = new int[3];
    arr[0] = 110;
    arr[1] = 120;
    arr[2] = 130;

    cout << "Address of a is " << &arr[0] << endl;
    cout << "valu at Address of a is " << arr[0] << endl;

    cout << "Address of a is " << &arr[1] << endl;
    cout << "valu at Address of a is " << arr[1] << endl;

    cout << "Address of a is " << &arr[2] << endl;
    cout << "valu at Address of a is " << arr[2] << endl;


    //delete keyword
    delete[] arr;
    cout << "Address of a is " << &arr[0] << endl;
    cout << "valu at Address of a is " << arr[0] << endl;

    cout << "Address of a is " << &arr[1] << endl;
    cout << "valu at Address of a is " << arr[1] << endl;

    cout << "Address of a is " << &arr[2] << endl;
    cout << "valu at Address of a is " << arr[2] << endl;
    return 0;
}