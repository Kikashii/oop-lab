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

class Lab
{
private:
    string labName;
    int capacity;

public:
    class N28Building *srcbng;
    Lab(string s = "", int c = 0) : labName(s), capacity(c)
    {
    }
    string getLabName()
    {
        return labName;
    }
    // N28Building *getbng()
    // {
    //     return &srcbng;
    // }
    // void setbng(N28Building *&s)
    // {
    //     srcbng = s;
    // }
    int getCapacity()
    {
        return capacity;
    }
    void setLabName(string s)
    {
        labName = s;
    }
    void setCapacity(int c)
    {
        capacity = c;
    }
    void display()
    {
        cout << "Lab " << labName << " " << capacity << " capacity\n";
    }
};

class LecturerRoom
{
private:
    string roomName;
    int roomNo, capacity;

public:
    LecturerRoom(string name = "", int n = 0, int c = 0) : roomName(name), roomNo(n), capacity(c)
    {
    }
    string getRoomName()
    {
        return roomName;
    }
    int getRoomNo()
    {
        return roomNo;
    }
    int getCapacity()
    {
        return capacity;
    }
    void setRoomName(string s)
    {
        roomName = s;
    }
    void setRoomNo(int n)
    {
        roomNo = n;
    }
    void setCapacity(int c)
    {
        capacity = c;
    }
    void display()
    {
        cout << roomName << " " << roomNo << " " << capacity << " capacity\n";
    }
};

class N28Building
{
private:
    vector<Lab> labList;
    vector<LecturerRoom> lecturerRoomList;

public:
    string bname;
    N28Building(string s = "") : bname(s)
    {
    }
    void addLab(Lab &x)
    {
        labList.push_back(x);
        x.srcbng = this;
    }
    void addLecturerRoom(LecturerRoom x)
    {
        lecturerRoomList.push_back(x);
    }

    void showAllLabs()
    {
        cout << "\nShowing all Labs : \n";
        for (auto i : labList)
            i.display();
    }

    void showAllLecturerRooms()
    {
        cout << "\nShowing all Lecturer Rooms : \n";
        for (auto i : lecturerRoomList)
            i.display();
    }
};

int main()
{
    Lab lab1("CSE", 100), lab2("EEE", 150), lab3("MPE", 90), lab4("CEE", 60);
    LecturerRoom lecturerRoom1("FH", 102, 3), lecturerRoom2("SA", 105, 3), lecturerRoom3("MKS", 202, 3), lecturerRoom4("ARMK", 208, 3);

    N28Building AB1("abcfn");

    AB1.addLab(lab1);
    //lab1.setbng(typeid(AB1).name());

    //cout << lab1.getbng() << nl;

    // AB1.addLab(lab2);
    // AB1.addLab(lab3);
    // AB1.addLab(lab4);

    //lab1.srcbng = &AB1;

    cout << (*lab1.srcbng).bname << nl;
    //cout << &AB1 << nl;

    AB1.addLecturerRoom(lecturerRoom1);

    AB1.addLecturerRoom(lecturerRoom2);
    AB1.addLecturerRoom(lecturerRoom3);
    AB1.addLecturerRoom(lecturerRoom4);

    // AB1.showAllLabs();
    // AB1.showAllLecturerRooms();
}