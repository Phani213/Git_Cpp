#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st1 ="Namaste anna em peekutuna eh";
    //Write to a file
    ofstream write1("Sample60.txt");
    write1<<st1;
    write1.close();
    // Reading a file
    string st2;
    ifstream read1("sample60.txt");
    getline(read1, st2);
    read1 >> st2;
    cout << st2;
    read1.close();
    return 0;
}