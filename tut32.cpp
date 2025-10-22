#include<iostream>
using namespace std;

/*Constructors with Default Arguments in C++

Default arguments of the constructor are those which are provided in the constructor declaration. 
If the values are not provided when calling the constructor the constructor uses the default arguments automatically. 
An example program to demonstrate the concept default arguments in C++ is shown below.*/
class Simple{
    int data1;
    int data2;
    int data3;

    public:
        Simple(int a, int b=9, int c=8){
            data1 = a;
            data2 = b;
            data3 = c;
        }

        void printData();

};

void Simple :: printData(){
    cout<<"The value of data1, data2 and data3 is "<<data1<<", "<< data2<<" and "<< data3<<endl;
}
/*As shown in a code snippet 1,

    1st we created a “simple” class which consists of private data members “data1”, “data2” and “data3”.
    2nd parameterized constructor of the “simple” class is defined which takes three parameters and assigns values to the data members “a” and “b”. The main thing to note here is that the value “9” and “8” are the default values for the variables “b” and “c”.
    3rd function “printData” is defined which prints the values of the data members “data1”, “data2”, and “data3”.

The main program is shown in code snippet 2.*/
int main(){
    Simple s(12, 13);
    Simple p(9);
    p.printData();
    s.printData();
    return 0;
}
/*Code Snippet 2: Main Program

As shown in code snippet 2,

    1st parameterized constructor is called with the object “s” of the data type “simple” and the values “12” and “13” are passed. The main thing to note here is that the value of the parameter “c” will be automatically set by the default value.
    2nd function “printData” is called which will print the values of data members.
*/
