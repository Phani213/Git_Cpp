#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

//Function objects(Functors) in c++

int main(){
    int arr[]={0,21,64,8,99,56,44};
    
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Ascending order"<<endl;
    sort(arr,arr+7);
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Descending order"<<endl;
    sort(arr,arr+7,greater<int>());
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<endl;
    }
}