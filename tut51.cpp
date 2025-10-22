#include <iostream>
using namespace std;

class pointers{
    private:
        int real, imaginary;
    public:
        void getData(int a, int b){
            real = a;
            imaginary = b;
        }

        void printData(void){
            cout<<"real is "<<real<<endl;cout<<"imaginary is "<<imaginary<<endl;
        }
};

int main(){
    pointers C1;
    C1.getData(51,95);
    C1.printData();
    //cout<<"*********************"<<endl;
    cout<<"*********/ Using Pointers /************"<<endl;
    pointers *C = &C1; 
    (*C).getData(2,6); 
    (*C).printData(); 
    //cout<<"*********************"<<endl;
    
    cout<<"*********/ Arrow Pointers /************"<<endl;
    pointers *B = new pointers;
    B->getData(21,26);
    B->printData();

}