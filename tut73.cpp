#include <iostream>
#include <string>
#include <map>
using namespace std;
// maps in c++

int main()
{
    map<string, int> mapping;
    mapping["Nin"] = 99;
    mapping["Phani"] = 35;
    mapping["sai"] = 70;
    mapping["Atul"] = 58;
    mapping["Rohit"] = 57;
    mapping["Kishlay"] = 78;
    mapping["Aditya"] = 65;
    mapping["Sachin"] = 53;
    //inserting the data in the map
    mapping.insert( pair<string, int>("Rohan", 89) );
 
    map<string, int>::iterator it1;
    for (it1 = mapping.begin(); it1 != mapping.end(); it1++)
    {
        cout << (*it1).first << " " << (*it1).second << "\n";
    }

    return 0;
}