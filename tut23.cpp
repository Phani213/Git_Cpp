#include <iostream>
using namespace std;

// C++ Objects memory allocations and using arrays in classes

class shop
{
    int itemID[100]; // creating an array with 100 memory allocations
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; } // counter initating
    void setprice(void);                    // ID and Price Entry Function
    void displayprice(void);                // display function
};

void shop ::setprice(void)
{
    cout << "Enter id number " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "Enter price" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "price of item " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop kiran_store;          // Creating a object kiran_store using shop class.
    kiran_store.initcounter(); // Initiates counter from zero(0).
    for (int i = 0; i < 5; i++)
    {
        kiran_store.setprice(); // Enter ited id and price for 5 times or as many as times by changing loop.
    }

    kiran_store.displayprice(); // Displays all prices and with itemid.
    return 0;
}