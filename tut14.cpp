#include<iostream>

using namespace std;

//structure, unions and enums 

struct ups //In structure we can use different types and then use it in the main code for better understanding
{
    /* data */
    int Id;
    float GehaltProStunden;
    float Stunden;
    char CId;
};

union Salary //similar like structure but only 1 datatype can be used at a time. It is used for better memory managment.
{
    /* data */
    float salary1;
    int id;
};

int main(){
    struct ups phani; //assiging ups structure to phani
    struct ups venky;
    union Salary m1; //unions
    int writesal;
    cout<<"Enter how many hours worked"<<endl;
    cin>>writesal;
    phani.Id = 734757;
    phani.GehaltProStunden = 17.02;
    phani.CId = 's';
    venky.Id = 734757;
    venky.GehaltProStunden = 12.50;
    venky.CId = 's';
    m1.salary1 = writesal*phani.GehaltProStunden;
    cout<<"UPS Id is "<<phani.Id<<endl;
    cout<<"UPS phani salary is "<<m1.salary1<<endl;
    cout<<"UPS veky salary is "<<writesal*venky.GehaltProStunden<<endl;
    cout<<"UPS cId is "<<phani.CId<<endl;
    enum names{ food1, food2, food3}; //enums
    cout<<food2;
    return 0;
}

