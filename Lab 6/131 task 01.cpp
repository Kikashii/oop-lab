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
class Coordinate
{
private:
    float x, y;

public:
    Coordinate() : x(0), y(0)
    {
    }
    Coordinate(float valx, float valy) : x(valx), y(valy)
    {
    }
    ~Coordinate()
    {
        cout << "Destructor is called" << nl;
    }
    float getDistance(Coordinate &c)
    {

        return sqrt(pow(x - c.x, 2) + pow(y - c.y, 2));
    }
    float getDistance()
    {
        return sqrt(pow(x, 2) + pow(y, 2));
    }
    void move_x(float val)
    {
        x += val;
    }
    void move_y(float val)
    {
        y += val;
    }
    void move(float val)
    {
        move_x(val);
        move_y(val);
    }
    int operator==(Coordinate &c)
    {
        if (getDistance() == c.getDistance())
            return 1;
        return 0;
    }
    int operator!=(Coordinate c)
    {
        if (getDistance() != c.getDistance())
            return 1;
        return 0;
    }
    int operator>(Coordinate c)
    {
        if (getDistance() > c.getDistance())
            return 1;
        return 0;
    }
    int operator<(Coordinate c)
    {
        if (getDistance() < c.getDistance())
            return 1;
        return 0;
    }
    int operator>=(Coordinate c)
    {
        if (getDistance() >= c.getDistance())
            return 1;
        return 0;
    }
    int operator<=(Coordinate c)
    {
        if (getDistance() <= c.getDistance())
            return 1;
        return 0;
    }
    Coordinate operator++(int)
    {
        return Coordinate(x++, y++);
    }
    Coordinate operator++()
    {
        return Coordinate(++x, ++y);
    }
    Coordinate operator--(int)
    {
        return Coordinate(x--, y--);
    }
    Coordinate operator--()
    {
        return Coordinate(--x, --y);
    }
    void display() const
    {
        cout << "Abscissa: " << x << endl;
        cout << "Ordinate: " << y << endl;
    }
};

int main()
{
    Coordinate c1(5, 8.5), c2(4, 7.5), c3;
    // cout << "Distance from origin: " << c1.getDistance() << endl;
    // cout << "Distance from another object: " << c1.getDistance(c2) << endl;

    // c1.move(5);
    // c1.display();

    // c3 = c1++;
    // c1.display();
    // c3.display();

    // c3 = ++c1;
    // c1.display();
    // c3.display();

    // c3 = --c2;
    // c2.display();
    // c3.display();

    // c3 = c2--;
    // c2.display();
    // c3.display();

    if (c1 == c2)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;
    return 0;
}