#include<iostream>

using namespace std;

//Inline Functions, Default Arguments and Control Arguments


inline int prsduct(int a, int b){ //Inline function
    return a*b+(b-a);
}

float Salary_Calculator(float Stunden, float GehaltProStunden=17.02){ 
    /*GehaltProStunden is defined as default argument when data is not given in the code for this variable it takes 17.02 as default. */
    float GehaltBrutto = (GehaltProStunden*Stunden);
    return GehaltBrutto;
}
//int sdjkf(const char *ps){} //the variable defined using const it means the variable value cant be modified
int main(){
    int a,b;
    float Stunden;
    cout<<"Enter a, b and Stunden :"<<endl;
    cin>>a>>b>>Stunden;

    cout<<"Inline function output is "<<prsduct(a,b)<<endl;
    cout<<"Salary using Default Argument is :"<<Salary_Calculator(Stunden)<<endl;  //After Stunden another argument is not given so code took 17.02 as default argument.
    cout<<"Salary without using Default Argumentis :"<<Salary_Calculator(Stunden,12)<<endl; //After Stunden another argument is given as 12 so code ran with 12 instead of default argument.
    return 0;
}