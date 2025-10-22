#include<iostream>

using namespace std;

//loop structures

int main(){
    int i =1;

    //for loop
    cout<<"********16th table******"<<endl;
    for (i; i <= 10; i++)
    {
        int table=16*i;
        cout<<16<<"X"<<i<<"="<<table<<endl;
    }

    //while loop
    int u=0;
    cout<<"******17th Table*******"<<endl;
    while(u<10)
    {
        u++;
        int table1 = 17*u;
        cout<<17<<"X"<<u<<"="<<table1<<endl;
    }
    

    //do while loop
    int v=0;
    cout<<"****18th table*****"<<endl;
    do
    {
        v++;
        int table2 = 18*v;
        cout<<18<<"X"<<v<<"="<<table2<<endl;
    } while (v<10);
    cout<<"Done with loops (tables task) and video 9."<<endl;
    return 0;

}   