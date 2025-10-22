#include<iostream>

using namespace std;
//control structures
int main(){
    //control structures
    //if else (selection structure)

    int age;
    cout<<"wie alt bist du?"<<endl;
    cin>>age;
    if(age<18){
        cout<<"du bist ein kind"<<endl;
    }
    else if(age>=18){
        cout<<"du bist eine erwachsen"<<endl;
    }

    //switch case structure

    switch (age)
    {
    case 18:
        cout<<"du bist ein erwachsene"<<endl;
        break;
    case 8:
        cout<<"du bist ein kind"<<endl;
        break;
    default:
        cout<<"alt ungulitig"<<endl;
        break;
    }
    cout<<"Done with selection structure and video 9"<<endl;
    return 0;
}