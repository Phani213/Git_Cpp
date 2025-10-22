#include<iostream>

using namespace std;
int main(){
    for(int i=1;i<40;i++){
        if(i==4)
        {
            break; //breaks the loop
        }
        cout<<i<<endl;
    }

    for(int i=1;i<10;i++){
        if(i==4)
        {
            continue;//skips the present loop and continues the next loop
        }
        cout<<i<<endl;
    }
    cout<<"done with video11"<<endl;
    return 0;
    
} 
