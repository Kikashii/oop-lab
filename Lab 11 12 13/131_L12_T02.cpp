#include <bits/stdc++.h>
using namespace std;

template <class T>
T amax(T *arr, int size, int n)
{
    T brr[size];
    copy(arr, arr + size, brr);
    sort(brr, brr + size, greater<T>());
    return brr[n - 1];
}

int main()
{
    int x;
    // int arr1[15];
    // for (int i = 0; i < 15; i++) //insert elements
    // {
    //     arr1[i] = i;
    // }
    // for (int i = 0; i < 15; i++) //display elements
    // {
    //     cout << arr1[i] << endl;
    // }
    // cout << "Enter which largest no : ";
    // cin >> x;
    // cout << "The " << x << "th largest element is " << amax(arr1, 15, x) << endl;

    // cout << endl;

    double arr2[15];
    for (int j = 0; j < 15; j++) //insert elements
    {
        arr2[j] = (double)j * 1.5;
    }
    for (int j = 0; j < 15; j++) //display elements
    {
        cout << arr2[j] << endl;
    }

    cout << "Enter which largest no : ";
    cin >> x;
    cout << "The " << x << "th largest element is " << amax(arr2, 15, x) << endl;

    return 0;
}
