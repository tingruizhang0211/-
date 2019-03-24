#include <iostream>
#include <string>

using namespace std;

class Account
{
public:
    Account(int yue)
 {
        if(yue<0)
        {
            rest=0;
        cout<<"ÎÞÐ§";
        }
        else
            rest=yue;
 }

    int credit(int add)
    {
        rest=rest+add;
        return rest;
    }

    int debit(int b)
    {
        if(b>rest)
            cout<<"Debit amount exceeded account balance.";
        else
            rest=rest-b;
            return rest;
    }

    void getBalance() const
    {
        cout<<"Óà¶îÊÇ:"<<rest;
    }

private:
    int rest;
};
int main()
{
    Account account(5000);
    account.getBalance();
    cout<<"take in:";
    int add;
    cin>>add;
    account.credit(add);
    account.getBalance();
    cout<<"take out:";
    int b;
    cin>>b;
    account.debit(b);
    account.getBalance();
}
