#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // connecting our file with hout stream
    ofstream write1("Sample60.txt");
    // creating a name string variable and filling it with string entered by the user
    string name;
    cout<<"Enter your name ";
    cin>>name;
    // writing a string to the file
    write1<<name +" is my name"; 

    // disconnecting the file
    write1.close();

    // connecting our file with hin stream
    ifstream read1("Sample60.txt");
    // creating a content string variable and filling it with string present there in the text file
    string name2;
    read1>>name2;
    cout<<name2;
    getline(read1, name2);
    cout<<name2;
    // disconnecting the file
    read1.close();

}