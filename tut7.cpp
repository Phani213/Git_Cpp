#include<iostream>

using namespace std;
int d=2552;
int main(){
    int x=500;
    int &y=x; //referencing variables using & symbol
    cout<<x<<endl;
    cout<<y<<endl;


    //scope resolution operator
    int d=240;
    cout<<"local d is "<<d<<endl;
    cout<<"global d is "<<::d<<endl; //   :: scope resolution operator to print global variable value


    //typecasting
    float s = 5077.2f;
    int b=50777;
    double p = 123.345;
    cout<<sizeof(s)<<endl;
    cout<<sizeof(p)<<endl;
    cout<<int(s)<<endl;
    cout<<(int)s<<endl;
    cout<<float(b)<<endl;
    cout<<(float)b<<endl;
    return 0;
}