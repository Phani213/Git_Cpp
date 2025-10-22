#include<iostream>

using namespace std;

//Functions and Function prototypes
// type function-name(arguments) 
/* write this before main function if the function is 
somewhere in the code so write this code before main 
makesures that the function is available in the code */
float Salary_Calculator(float stunden, float GehaltProStunden);  //Function prototype
float Gehalt_Netto(float GehaltBrutto);  //Function prototype

int main(){
    float num1,minutes;
    float num2 =17.02;
    cout<<"Enter Hours :";
    cin>>num1;
    cout<<"Enter minutes :";
    cin>>minutes;
    float Percentage = num1+(minutes*1/60);
    cout<<"geasamt Hours is "<<Percentage<<endl;
    float Netto = Salary_Calculator(Percentage,num2);
    //num1 and num2 are actual parameters
    cout<<"Salary for this month is :"<<Netto<<"€"<<endl;
    cout<<"Salary for this month after taxes is :"<<Gehalt_Netto(Netto)<<"€"<<endl;
    //Gehalt_Netto();
    return 0;
}
float Salary_Calculator(float Stunden, float GehaltProStunden){
    // Formal Parameters Stunden and GehaltProStunden wiil be taking values from actual Parameters num1 and num2
    float GehaltBrutto = (GehaltProStunden*Stunden);
    //float Gehalt = GehaltBrutto-(GehaltBrutto-0.17);
    return GehaltBrutto;
}

float Gehalt_Netto(float GehaltBrutto){
    float GehaltNetto = GehaltBrutto-(GehaltBrutto*0.17); 
    return GehaltNetto;
}