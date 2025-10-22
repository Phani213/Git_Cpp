#include<iostream>
using namespace std;

//OOPS
//Classes, public and private access modifiers

class employee //classes
{
    private:
    int id;
    float salary, stunden;
    public:
    float GehaltProstunden, Procent;
    void setData(int a1, float b1, float c1); //Data is set //declartion
    void getData(){
        cout<<"id is "<<id<<endl;
        cout<<"Salary is "<<salary<<endl;
        cout<<"Stunden is "<<stunden<<endl;
        cout<<"GehaltProstunden is "<<GehaltProstunden<<endl;
        cout<<"Procent is "<<Procent<<endl;
    }
};

void employee :: setData(int a1, float b1, float c1){ //functions
    id = a1;
    salary = b1;
    stunden = c1;
}
int main(){
    employee phani; //objects
    employee yosuef, venky;
    venky.GehaltProstunden =16.5;
    venky.Procent=9;
    yosuef.GehaltProstunden=16;
    yosuef.Procent=9;

    //phani.id=12121251: --> this will throw an error as id is private.
    phani.GehaltProstunden =17.02;
    phani.Procent = 19;
    phani.setData(734757, 1100, 65); 
    venky.setData(123456, 900, 56);
    yosuef.setData(654321, 1200,68);
    yosuef.getData();
    venky.getData();
    phani.getData();
    return 0;
}
