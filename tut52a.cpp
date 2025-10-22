#include <iostream>
using namespace std;

class Salary
{
private:
    int month;
    float Gehalt;

public:
    void getData(int a, float b){
        month = a;
        Gehalt = b;
    }
    void printData(void){
        cout<<"month is "<<month<<endl;
        cout<<"Salary is "<<Gehalt<<endl;
    }
};
int main(){
    int M;
    float TotalSalary;
    cout<<"enter size ";
    cin>>M;
    Salary *ptr = new Salary [M];
    Salary *ptrTemp = ptr;
    int p, i;
    float q;
    for(i= 0; i<M;i++){
        cout<<"Enter month and Salary"<<endl;
        cin>>p>>q;
        ptr->getData(p,q);
        TotalSalary = TotalSalary+q;
        ptr++;
    }
    for ( i = 0; i < M; i++)
    {
       (*ptrTemp).printData();
       ptrTemp++;
    }
    
    cout<<"Total salary is "<<TotalSalary<<endl;
    
}
