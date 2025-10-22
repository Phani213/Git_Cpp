#include<iostream>
#include<vector>

using namespace std;
//Vectors in c++
template <class Var>
void Display(vector<Var> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";/* code */
    }
    cout<<endl;
}
int main(){
    vector<float> vec1; //creates vector 1
    vector<int> vec2(16,4); //creates vector of 16-elements of 4 Data.
    vector<char> vec3(16,'S');
    int size_vec;
    float data;
    cout<<"Enter size: ";
    cin>>size_vec;
    for(int i= 0;i<size_vec;i++){
        cout<<"element ";
        cin>>data;
        vec1.push_back(data);
    }
    Display(vec1);
    vector<int> :: iterator add =vec2.end();
    vec2.insert(add-1,99);
    //Display(vec1);
    
    Display(vec2);
    Display(vec3);
    return 0;
}