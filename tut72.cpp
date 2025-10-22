#include<iostream>
#include<list>
using namespace std;
//lists in c++ STL

void Display(list<int> &lst){
    list<int> :: iterator it;
    for (it =lst.begin(); it!= lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> list1;
    list1.push_back(10);
    list1.push_back(100);
    list1.push_back(1454);
    list1.push_back(1);
    list1.push_back(250);
    list1.push_back(910);
    list1.push_back(825);
    cout<<"the data on the list is : "<<endl;
    Display(list1);
    //sorting the data
    list1.sort();
    cout<<"After sorting the data on the list is : "<<endl;
    Display(list1);

    list<int> list2(3);  //empty list of length 3
    list<int> :: iterator it = list2.begin();
    *it = 45;
    it++;
    *it = 6;
    it++;
    *it = 9;
    it++;
    cout<<"the data on the list is : "<<endl;
    Display(list2);
    cout<<"After sorting the data on the list is : "<<endl;
    list2.sort();
    Display(list2);
    //list1.merge(list2);
    //cout<<"After merging and sorting the data on the list is : "<<endl;
    //Display(list1);
    
    //Swaping lists
    list1.swap(list2);
    cout<<"Data on list1 is "<<endl;
    Display(list1);
    cout<<"Data on list2 is "<<endl;
    Display(list2);
    list2.pop_back();
    list2.pop_back();
    list2.pop_back();
    list2.remove(10);
    cout<<"after popping (removing) data on list 2 is "<<endl;
    Display(list2);

    //reswaping data
    list1.swap(list2);
    cout<<endl<<"Data on list1 is "<<endl;
    Display(list1);
    cout<<"Data on list2 is "<<endl;
    Display(list2);

    return 0;}