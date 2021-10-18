#include <bits/stdc++.h>
#define nl endl

using namespace std;

const int MAX = 3;

template <class T>
class Stack
{
private:
    T st[MAX]; //array of Types
    int top;   //index of top of stack
public:
    class Full //exception class for Stack if full
    {          //note: empty class body
    };
    class Empty //exception class for Stack if empty
    {
    };
    Stack() //constructor
    {
        top = -1;
    }
    void push(T var)
    {
        if (top >= MAX - 1) //if stack full,
            throw Full();   //throw exception
        st[++top] = var;    //put number on stack
    }
    T pop()
    {
        if (top < 0)       //if stack empty,
            throw Empty(); //throw exception
        return st[top--];  //take number off stack
    }
    T peek()
    {
        if (top < 0)       //if stack empty,
            throw Empty(); //throw exception
        return st[0];
    }
};

int main()
{
    // Stack<int> s1;
    // try
    // {
    //     s1.push(10);
    //     s1.push(20);
    //     s1.push(30);
    //     cout << s1.pop() << nl;
    //     cout << s1.peek() << nl;
    //     s1.push(40);
    //     //s1.push(50);
    //     cout << s1.pop() << nl;
    //     cout << s1.pop() << nl;
    //     cout << s1.pop() << nl;
    //     //cout << s1.pop() << nl;
    //     cout << s1.peek() << nl;
    // }
    // catch (Stack<int>::Full) //exception handler
    // {
    //     cout << "Exception : Stack Full " << nl;
    // }
    // catch (Stack<int>::Empty) //exception handler
    // {
    //     cout << "Exception : Stack Empty " << nl;
    // }
    // cout << "Arrive here after catch (or normal exit)" << nl;
    Stack<float> s1;
    try
    {
        s1.push(11.5);
        s1.push(22.5);
        s1.push(33.5);
        cout << s1.pop() << nl;
        cout << s1.peek() << nl;
        s1.push(44.5);
        s1.push(55.5);
        // cout << s1.pop() << nl;
        // cout << s1.pop() << nl;
        // cout << s1.pop() << nl;
        // cout << s1.pop() << nl;
        // //cout << s1.peek() << nl;
    }
    catch (Stack<float>::Full) //exception handler
    {
        cout << "Exception : Stack Full " << nl;
    }
    catch (Stack<float>::Empty) //exception handler
    {
        cout << "Exception : Stack Empty " << nl;
    }
    cout << "Arrive here after catch (or normal exit)" << nl;
    return 0;
}