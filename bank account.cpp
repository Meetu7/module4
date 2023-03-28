/*Define a class to represent a bank account. Include the following members:
1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account

2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance*/

/*ICIC BANK*/

#include<iostream>
#include<string.h>
using namespace std;

class ICIC
{
    protected:
    string name;
    int account_no,balance_amount,deposite_amount,withdraw_amount,total_balance;

    public:

    void accountholdersname()
    {
        cout<<"Account holder's Name : ";
        cin>>name;
    }
    void accountnumber()
    {
        cout<<"Account number is :";
        cin>>account_no;
    }
    void typeofacc()
    {
        cout<<"Type of account is : CURRENT ACCOUNT "<<endl;
    }
    void balance()
    {
        cout<<"Balance in account is : Rs.";
        cin>>balance_amount;
    }
    void depositeamount()
    {
        cout<<"Deposite amount is : Rs."; 
        cin>>deposite_amount;
        cout<<"Total amount after deposite is : Rs."<<balance_amount+deposite_amount<<endl;
    }
    void withdraw()
    {
        cout<<"Withdraw amount is : Rs.";
        cin>>withdraw_amount;
    }
    void Totalbalance()
    {
        name="Kathiriya Meet";
        total_balance=balance_amount+deposite_amount-withdraw_amount;

        cout<<"\nACCOUNT HOLDER'S NAME IS : "<<name<<endl;
        cout<<"\nTotal balance is : Rs. "<<total_balance<<endl;

    }
};
int main()
{
    ICIC r;
    r.accountholdersname();
    r.accountnumber();
    r.typeofacc();
    r.balance();
    r.depositeamount();
    r.withdraw();
    r.Totalbalance();
}