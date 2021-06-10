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

class Product
{
private:
    char name[50];
    double discountPercent, unitPrice;

public:
    Product()
    {
        unitPrice = 10;
        discountPercent = 0.5;
    }

    void assignName(const char *Name)
    {
        strcpy(name, Name);
    }

    void setPrice(double price)
    {
        if (price > -1)
        {
            unitPrice = price;
        }
        else
            cout << "Price is invalid" << nl;
    }

    void setDiscPercent(double percent)
    {
        if (percent >= 0 and percent <= 10)
        {
            discountPercent = percent;
        }
        else
            cout << "Discount is invalid" << nl;
    }

    double getSellingPrice(int nos)
    {
        return nos * (unitPrice - (unitPrice * discountPercent / 100));
    }

    void display()
    {
        cout << name << " has a unit price BDT " << unitPrice << ". Current discount " << discountPercent << "%." << nl;
    }
};

int main()
{
}