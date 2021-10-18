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
class String
{
private:
    char *s;
    int len;

public:
    String(const char *str = "")
    {
        len = strlen(str);
        s = new char[len + 1];
        strcpy(s, str);
        cout << "Normal Constructor called\n";
    }
    String(const String &a) //Copy Constructor overloading
    {
        len = a.len;
        s = new char[len + 1];
        strcpy(s, a.s);

        cout << "Copy Constructor invoked\n";
    }
    void operator=(const String &a) //Assignment operator overloading
    {
        delete[] s;
        len = a.len;
        s = new char[len + 1];
        strcpy(s, a.s);
        cout << "Assignment operator invoked\n";
    }
    ~String()
    {
        delete[] s;
        delete &len;

        cout << "Destructor called\n";
    }
    void print()
    {
        cout << s << endl;
    }
    void setString(char *str)
    {
        delete[] s;
        len = strlen(str);
        s = new char[len + 1];
        strcpy(s, str);
    }
};

int main()
{
    String str1("Rafid");
    String str2("Nahiyan");
    String str3;
    str3 = str1;
    str3 = str2;
    String str4 = str2;

    str1.print();
    str2.print();
    str3.print();
    // cout << "-------------\n\n";

    //  //Advantage of copy contructor
    // String str4("Zaman");
    // str3 = str4;

    // str1.print();
    // str2.print();
    // str3.print();
    // cout << "-------------\n\n";

    // //Advantage of assignment operator
    // char c[] = "ABC";
    // str4.setString(c);

    // str1.print();
    // str2.print();
    // str3.print();
    // str4.print();
    return 0;
}