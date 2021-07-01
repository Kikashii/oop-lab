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

class Calculator
{
private:
    int var;

public:
    Calculator() : var(0)
    {
    }
    Calculator(int val) : var(val)
    {
    }
    int getvalue()
    {
        return var;
    }
    void setvalue()
    {
        cout << "Enter value : ";
        int x;
        cin >> x;
        var = x;
    }
    void add(int Value)
    {
        cout << "add " << Value << nl;
        var += Value;
    }
    void subtract(int Value)
    {
        cout << "subtract " << Value << nl;
        var -= Value;
    }
    void multiply(int Value)
    {
        cout << "multiply " << Value << nl;
        var *= Value;
    }
    void divideby(int Value)
    {
        cout << "divide by " << Value << nl;
        if (Value == 0)
        {
            cout << "Error : divide by 0 is undefined." << nl;
            return;
        }
        var /= Value;
    }
    void clear()
    {
        cout << "clear" << nl;
        var = 0;
    }
    void display()
    {
        cout << "Calculator display: " << var << nl;
        cout << "--------------------------------------------------" << nl;
    }
    ~Calculator()
    {
        cout << "Calculator object is destroyed." << nl;
    }
};

int main()
{
    Calculator c;
    c.add(10);
    c.display();

    c.add(7);
    c.display();

    c.multiply(7);
    c.display();

    c.subtract(42);
    c.display();

    c.divideby(42);
    c.display();

    c.divideby(0);
    c.display();

    c.setvalue();
    cout << c.getvalue() << nl;

    c.clear();
    c.display();
}
