#include<iostream>
using namespace std;

class Employee{
    
    public:
        int id;
        float salary;
        Employee(){}
        Employee(int ipd){
            id = ipd;
            salary = 34;
        }
        
};


/*
class {{derived class name}} : {{visibility mode}} {{base-class name}}
{
class members/methods/etc...
}
1. Default visibility mode is private
2. public visibility mode : public members of the base class becomes public class of the derived class
3. private visibility mode : public members of the base class becomes private class of the derived class
4. private members are never inherited
*/

class Programmer : public Employee
{
public:
    int langcode;
    Programmer(int inpid){
        id = inpid;
        langcode =410;
    }
    void getdata(){
        cout<<id<<endl;
    }
};


/*As shown in Code snippet 2,

    1st we created an “employee” class which consists of public data member’s integer “id” and float “salary”.
    2nd the “employee” class consists of a parameterized constructor that takes an integer “inpid” parameter and assigns its value to the data member “id”. The value of variable “salary” is set to “34”.
    3rd the “employee” class also consists of default constructor.
    4th we created a “programmer” class that is inheriting “employee” class. The main thing to note here is that the “visibility-mode” is “public”.
    5th the “programmer” class consists of public data member’s integer “languageCode”.
    6th the “programmer” class consists of a parameterized constructor that takes an integer “inpid” parameter and assigns its value to the data member “id”. The value of variable “languageCode” is set to “9”.
    7th “programmer” class consists of a function “getData” which will print the value of the variable “id”.
*/
int main(){
    Employee nin(1), sai(2);
    cout<<nin.id<<" , "<<nin.salary<<endl;
    cout<<sai.id<<" , "<<sai.salary<<endl;
    Programmer phani(213);
    //phani.id =213;
    cout<<phani.id<<endl;
    cout<<phani.langcode<<endl;
    return 0;
}

/*
    1st objects “harry” and “rohan” is created of the “employee” data type. Object “harry” is passed with the value “1” and the object “rohan” is passed with the value “2”.
    2nd the “salary” of both objects “rohan” and “harry” are printed.
    3rd object “skillF” is created of the “programmer” data type. Object “skillF” is passed with the value “10”.
    4th the “languageCode” and “id” of both object “skillF” is printed.
    5th the function “getData” is called by the “skillF” object. This will print the “id”.
*/