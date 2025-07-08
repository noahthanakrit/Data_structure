#include <iostream>
#include "stack"
#include "queue"
using namespace std;

void appendStack(stack<int> s1, stack<int> s2)
{
    stack<int> temp;
    while (!s1.empty())
    {
        temp.push(s1.top());
        s1.pop();
    }

    while (!s2.empty())
    {
        temp.push(s2.top());
        s2.pop();
    }

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

void appendQueue(queue<int> q1, queue<int> q2)
{
    while (!q2.empty())
    {
        q1.push(q2.front());
        q2.pop();
    }

    while (!q1.empty())
    {
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl;
}

void appendStack2Queue(stack<int> s, queue<int> q)
{
    stack<int> temp;
    while (!s.empty())
    {
        temp.push(s.top());
        s.pop();
    }

    while (!q.empty())
    {
        temp.push(q.front());
        q.pop();
    }

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

void appendQueue2Stack(queue<int> q, stack<int> s)
{
    queue<int> temp = q;
    while (!s.empty())
    {
        temp.push(s.top());
        s.pop();
    }

    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> s1;
    for (int i = 1; i <= 5; ++i)
    {
        s1.push(i);
    }

    stack<int> s2;
    s2.push(11);
    s2.push(12);

    queue<int> q1;
    for (int j = 6; j <= 9; ++j)
    {
        q1.push(j);
    }

    queue<int> q2;
    q2.push(16);
    q2.push(17);

    appendStack(s1, s2);
    appendQueue(q1, q2);
    appendStack2Queue(s1, q1);
    appendQueue2Stack(q1, s1);
    return 0;
}