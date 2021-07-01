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

class ZooAnimal
{
private:
    char nameOfAnimal[100];
    int birthYear;
    int cageNumber;
    float weight;
    int height;

public:
    ZooAnimal() : birthYear(0), cageNumber(0), weight(0), height(0)
    {
        strcpy(nameOfAnimal, "");
    }
    void setname(char str[])
    {
        strcpy(nameOfAnimal, str);
    }
    void setbirthyear(int x = 2021)
    {
        if (x <= 2021)
            birthYear = x;
    }
    void setweight(float x)
    {
        weight = x;
    }
    void setheight(int x)
    {
        height = x;
    }
    void setcageno(int x)
    {
        cageNumber = x;
    }
    char *getname()
    {
        return nameOfAnimal;
    }
    int getbirthyear()
    {
        return birthYear;
    }
    int getcage()
    {
        return cageNumber;
    }
    float getweight()
    {
        return weight;
    }
    int getheight()
    {
        return height;
    }
    int getage()
    {
        return 2021 - getbirthyear();
    }
    void getInformation()
    {
        cout
            << "nameOfAnimal: " << nameOfAnimal << nl
            << "birthYear: " << birthYear << nl
            << "cageNumber: " << cageNumber << nl
            << "weight: " << weight << nl
            << "height: " << height << nl;
    }
};

int main()
{
    ZooAnimal tiger;

    tiger.setname("Rocky");
    tiger.setbirthyear(2001);
    tiger.setcageno(1);
    tiger.setweight(65.8);
    tiger.setheight(5);

    cout << tiger.getname() << nl;
    cout << tiger.getbirthyear() << nl;
    cout << tiger.getage() << nl;
    cout << tiger.getcage() << nl;
    cout << tiger.getweight() << nl;
    cout << tiger.getheight() << nl;

    tiger.getInformation();
}
