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
class pokemon
{
public:
    virtual void intro()
    {
        cout << "I am a pokemon" << nl;
    }
};

class pikachu : public pokemon
{
public:
    void intro()
    {
        cout << "I am pikachu" << nl;
    }
};

class bulbasur : public pokemon
{
public:
    //no overloading given
};

class signPen //abstract class as pure virtual function exists
{
public:
    virtual void color()
    {
        cout << "color not given yet" << nl;
    }; //a sign pen must have a specific color
};

class matador : public signPen
{
public:
    void color()
    {
        cout << "Blue" << nl;
    }
};

class fabercastle : public signPen
{
public:
    //no pure virtual function's overriding given
};

int main()
{
    // pokemon *p;
    // pikachu pi;
    // bulbasur b;

    // p = &pi;
    // p->intro();

    // p = &b;
    // p->intro();

    signPen s; //error because abstract class
    signPen *sp;
    matador m;
    //fabercastle c; //error because no overridden function

    sp = &m;
    sp->color();
}