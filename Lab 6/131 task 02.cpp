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

class FLOAT
{
private:
    float data;

public:
    FLOAT() : data(0)
    {
    }
    FLOAT(float x) : data(x)
    {
    }
    void setValue(float x)
    {
        data = x;
    }
    void Display()
    {
        cout << "Data: " << data << endl;
    }
    FLOAT operator+(FLOAT f)
    {
        return FLOAT(data + f.data);
    }
    FLOAT operator-(FLOAT f)
    {
        return FLOAT(data - f.data);
    }
    FLOAT operator*(FLOAT f)
    {
        return FLOAT(data * f.data);
    }
    FLOAT operator/(FLOAT f)
    {
        if (f.data != 0)
            return FLOAT(data / f.data);
        else
        {
            cout << "can't divide by zero" << nl;
            return FLOAT(0);
        }
    }
    operator int() const
    {
        return int(data);
    }
};

int main()
{
    FLOAT f1(10.5), f2(6.3), f3, f4;
    f3.setValue(2.9);
    // f1.Display();
    // f2.Display();
    // f3.Display();

    // f4 = f1 + f2;
    // f4.Display();

    // f4 = f1 - f3;
    // f4.Display();

    // f4 = f1 * f2;
    // f4.Display();

    // f4 = f2 / f3;
    // f4.Display();

    int i = f1;
    cout << "Integer value: " << i << endl;
}