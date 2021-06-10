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

class Counter
{
private:
    int count, stepvalue;

public:
    Counter()
    {
        count = 0;
        stepvalue = 0;
    }
    void setIncrementStep(int step_val)
    {
        stepvalue = step_val;
    }
    int getCount()
    {
        return count;
    }
    void increment()
    {
        count += stepvalue;
    }
    void resetCount()
    {
        count = 0;
    }
};

int main()
{
}