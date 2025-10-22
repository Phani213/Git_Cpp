#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   /* ofstream write1;
    write1.open("sample60.txt");
    read1<<"This is me\n";
    read1 <<"This is also me";
    write1.close();*/

   ifstream read1;
   string data;
   read1.open("sample60.txt");

   while (read1.eof() == 0) 
   {
      getline(read1, data);
      cout << data << endl;
   }
   // read1.close();
   return 0;
}