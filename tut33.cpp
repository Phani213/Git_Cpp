#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestrate, returnvalue;

public:
    BankDeposit(){};
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void printvalue(void)
    {
        cout << "Principal is " << principal << " .Return value is " << returnvalue << endl;
    }
};

BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestrate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
int main()
{
    BankDeposit spk1, spk2;
    int deposit, years;
    float rate;
    int rate1;
    cout << "Enter the amount Deposited :";
    cin >> deposit;
    cout << "Enter the  no of years :";
    cin >> years;
    cout << "Enter the interest rate :";
    cin >> rate;
    spk1 = BankDeposit(deposit, years, rate);
    spk1.printvalue();
    cout << "Enter the amount Deposited :";
    cin >> deposit;
    cout << "Enter the  no of years :";
    cin >> years;
    cout << "Enter the interest rate :";
    cin >> rate1;
    spk2 = BankDeposit(deposit, years, rate1);
    spk2.printvalue();
    return 0;
}