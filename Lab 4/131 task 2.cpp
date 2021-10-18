#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
#define nl endl
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define fastio                       \
    ios_base::sync_with_stdio(NULL); \
    cin.tie(NULL);                   \
    cout.tie(NULL);
using namespace std;

class Bankaccount
{
private:
    static int total_acc;
    int account_no;
    string acc_holder;
    char acc_type;
    double cur_balance;
    double min_balance;

public:
    Bankaccount()
    {
        cout << "account holder name: ";
        cin >> acc_holder;
        cout << "account type(if Current account type c, if saving type s): ";
        cin >> acc_type;
        cout << "minimum account balance: ";
        cin >> min_balance;
        cur_balance = min_balance;
        account_no = total_acc++;
    }
    void display()
    {
        cout << "account no: " << account_no << nl;
        cout << "account holder name: " << acc_holder << nl;
        cout << "account type: " << acc_type << nl;
        cout << "current account balance: " << cur_balance << nl;
    }
    void showbalance()
    {
        cout << cur_balance << nl;
    }
    void deposit(double x)
    {
        if (x > 0)
        {
            cur_balance += x;
            return;
        }
        cout << "Deposit money must be greater than 0" << nl;
    }
    void withdrawal(double x)
    {
        if (x <= 0)
            cout << "Withdrawal amount must be positive" << nl;
        else if (cur_balance - x < min_balance)
            cout << "Exceeds minimum balance" << nl;
        else
            cur_balance -= x;
    }
    void giveinterest(double rate = 2.5)
    {
        cout << rate / 100 << nl;
        double interest = cur_balance * rate / 100 * .9;
        deposit(interest);
    }
    ~Bankaccount()
    {
        cout << "Account of " << acc_holder << "  with account no " << account_no << " is destroyed with a balance BDT " << cur_balance << nl;
    }
};

int Bankaccount::total_acc = 1;

int main()
{
    Bankaccount ac;
    ac.showbalance();
    ac.deposit(-50.0);

    ac.deposit(50.0);
    ac.showbalance();

    ac.withdrawal(-40);
    ac.withdrawal(40);
    ac.withdrawal(30);

    ac.showbalance();

    ac.giveinterest();
    ac.showbalance();
}