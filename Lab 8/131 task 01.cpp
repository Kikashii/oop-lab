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

class Account
{
protected:
    string accountNo;
    string accountName;
    string desc;
    float balance;

public:
    Account() : balance(0)
    {
    }
    Account(float b) : balance(b)
    {
    }
    void setAccountbal()
    {
        cout << "Account balance: ";
        cin >> balance;
    }
    void getAccountbal()
    {
        cout << "Account balance: " << balance << nl;
    }
    void description()
    {
        cout << accountName << ", " << desc << nl;
    }
};

class CurrentAccount : public Account
{
private:
    const static int serviceCharge = 100;
    const static int accountPrefix = 100;
    static int nextAccount;
    void nextAccountNo()
    {
        nextAccount++;
    }

public:
    CurrentAccount()
    {
        accountName = "Current Account";
        accountNo = "100-" + to_string(nextAccount);
        desc = "Your perfect account for everyday needs";
        nextAccountNo();
    }
    void setCurrentAccount()
    {
        cout << "Enter Account info:";
        setAccountbal();
    }
    void getCurrentAccount()
    {
        cout << "Showing account info:\n";
        cout << "Account name: " << accountName << nl;
        cout << "Account no: " << accountNo << nl;
        getAccountbal();
        cout << "Service charge: " << serviceCharge << nl;
        cout << "Account prefix: " << accountPrefix << nl;
    }
};

class LoanAccount : public Account
{
private:
    double InterestRate;
    double monthlyDepositAmount;
    const static int accountPrefix = 900;
    static int nextAccount;
    void nextAccountNo()
    {
        nextAccount++;
    }

public:
    LoanAccount(double i = 0, double m = 0) : InterestRate(i), monthlyDepositAmount(m)
    {
        accountName = "Loan Account";
        accountNo = "900-" + to_string(nextAccount);
        desc = "You need to deposit a a portion of your loned amount of money each month with interest";
        nextAccountNo();
    }
    void setLoanAccount()
    {
        cout << "Enter Account info:\n";
        cout << "Interest Rate: ";
        cin >> InterestRate;
        cout << "Monthly Deposit Amount: ";
        cin >> monthlyDepositAmount;
        setAccountbal();
    }
    void getLoanAccount()
    {
        cout << "\nShowing account info:\n";
        cout << "Account name: " << accountName << nl;
        cout << "Account no: " << accountNo << nl;
        getAccountbal();
        cout << "Interest Rate:: " << InterestRate << nl;
        cout << "Monthly Deposit Amount: " << monthlyDepositAmount << nl;
        cout << "Account prefix: " << accountPrefix << nl;
    }
};

class SavingsAccount : public Account
{
private:
    double InterestRate;
    double monthlyDepositAmount;
    const static int accountPrefix = 200;
    static int nextAccount;
    void nextAccountNo()
    {
        nextAccount++;
    }

public:
    SavingsAccount(double i = 0, double m = 0) : InterestRate(i), monthlyDepositAmount(m)
    {
        accountName = "Savings Account";
        accountNo = "200-" + to_string(nextAccount);
        desc = "You need to deposit a fixed amount of money each month ";
        nextAccountNo();
    }
    void setSavingsAccount()
    {
        cout << "Enter Account info:\n";
        cout << "Interest Rate: ";
        cin >> InterestRate;
        cout << "Monthly Deposit Amount: ";
        cin >> monthlyDepositAmount;
        setAccountbal();
    }
    void getSavingsAccount()
    {
        cout << "\nShowing account info:\n";
        cout << "Account name: " << accountName << nl;
        cout << "Account no: " << accountNo << nl;
        getAccountbal();
        cout << "Interest Rate:: " << InterestRate << nl;
        cout << "Monthly Deposit Amount: " << monthlyDepositAmount << nl;
        cout << "Account prefix: " << accountPrefix << nl;
    }
};

class MonthlyDepositScheme : public Account
{
protected:
    double InterestRate;
    double monthlyDepositAmount;
    const static int accountPrefix = 300;
    static int nextAccount;
    void nextAccountNo()
    {
        nextAccount++;
    }

public:
    MonthlyDepositScheme(double i = 0, double m = 0) : InterestRate(i), monthlyDepositAmount(m)
    {
        accountNo = "300-" + to_string(nextAccount);
        desc = "You need to deposit a fixed amount of money each month";
        nextAccountNo();
    }
    void setmds()
    {
        cout << "Enter Account info:\n";
        cout << "Interest Rate: ";
        cin >> InterestRate;
        cout << "Monthly Deposit Amount: ";
        cin >> monthlyDepositAmount;
        setAccountbal();
    }
    void getmds()
    {
        cout << "\nShowing account info:\n";
        cout << "Account name: " << accountName << nl;
        cout << "Account no: " << accountNo << nl;
        getAccountbal();
        cout << "Interest Rate:: " << InterestRate << nl;
        cout << "Monthly Deposit Amount: " << monthlyDepositAmount << nl;
        cout << "Account prefix: " << accountPrefix << nl;
    }
};

class TwoYearMDS : public MonthlyDepositScheme
{
private:
    double maximuminterest;

public:
    TwoYearMDS(double mi = 0) : maximuminterest(mi)
    {
        accountName = " Two Year monthly deposit scheme";
    }
    void settymds()
    {
        setmds();
        cout << "\nMaximum interest: ";
        cin >> maximuminterest;
    }
    void gettymds()
    {
        getmds();
        cout << "Maximum interest: " << maximuminterest << nl;
    }
};

class FiveYearMDS : public MonthlyDepositScheme
{
private:
    double maximuminterest;

public:
    FiveYearMDS(double mi = 0) : maximuminterest(mi)
    {
        accountName = "Five Year monthly deposit scheme";
    }
    void setfymds()
    {
        setmds();
        cout << "\nMaximum interest: ";
        cin >> maximuminterest;
    }
    void getfymds()
    {
        getmds();
        cout << "Maximum interest: " << maximuminterest << nl;
    }
};

class InititalDepositMDS : public MonthlyDepositScheme
{
private:
    double maximuminterest;
    double InitialDepositAmount;

public:
    InititalDepositMDS(double mi = 0, double ida = 0) : maximuminterest(mi), InitialDepositAmount(ida)
    {
        accountName = "Initial deposit monthly deposit scheme";
    }
    void setidmmds()
    {
        setmds();
        cout << "Maximum interest: ";
        cin >> maximuminterest;
        cout << "Initial Deposit Amount: ";
        cin >> InitialDepositAmount;
    }
    void getidmmds()
    {
        getmds();
        cout << "Maximum interest: " << maximuminterest << nl;
        cout << "Initial Deposit Amount: " << InitialDepositAmount << nl;
    }
};

int CurrentAccount::nextAccount = 1;
int SavingsAccount::nextAccount = 1;
int LoanAccount::nextAccount = 1;
int MonthlyDepositScheme::nextAccount = 1;

int main()
{
    // CurrentAccount ca;
    // ca.setCurrentAccount();
    // ca.getCurrentAccount();

    LoanAccount la(20, 60);
    //la.setLoanAccount();
    la.getLoanAccount();

    // SavingsAccount sa;
    // sa.setSavingsAccount();
    // sa.getSavingsAccount();

    // TwoYearMDS tm;
    // tm.setmds();
    // tm.getmds();

    // InititalDepositMDS iop;
    // iop.description();
}