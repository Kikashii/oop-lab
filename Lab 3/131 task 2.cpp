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

class RationalNumber
{
private:
    int numerator, denominator;

public:
    RationalNumber()
    {
        numerator = 1;
        denominator = 1;
    }
    void assign(int Numerator, int Denominator)
    {
        if (Denominator == 0)
        {
            cout << "Denominator can't be zero" << nl;
            return;
        }
        numerator = Numerator;
        denominator = Denominator;
    }
    double convert()
    {
        return numerator / (double)denominator;
    }
    void invert()
    {
        if (numerator != 0)
            swap(numerator, denominator);

        else
            cout << "Numerator is zero.Invert is not valid" << nl;
    }
    void print()
    {
        cout << numerator << "/" << denominator << nl;
    }
};

int main()
{
}