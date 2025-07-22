#include <iostream>
#include <vector>
#include <algorithm>
#include "stack"
using namespace std;

void printVector(vector<int> &v)
{
    for (int each : v)
    {
        cout << each << " ";
    }
    cout << endl;
}

class Stack
{
public:
    vector<int> v;
    Stack()
    {
    }

    Stack(stack<int> a)
    {
        v.clear();
        while (!a.empty())
        {
            v.push_back(a.top());
            a.pop();
        }
        reverse(v.begin(), v.end());
    }

    void push(int e)
    {
        v.push_back(e);
    }

    int top() const
    {
        return v.back();
    }

    void pop()
    {
        v.pop_back();
    }

    size_t size()
    {
        return v.size();
    }

    void deep_push(int e, int depth)
    {
        int index = v.size() - depth;
        if (index <= 0)
        {
            v.insert(v.begin(), e);
        }
        else
        {
            v.insert(v.begin() + index, e);
        }
    }

    void multi_push(vector<int> &w)
    {
        for (int each : w)
        {
            push(each);
        }
    }

    void pop_until(int e)
    {
        while (v.back() != e && !v.empty())
        {
            v.pop_back();
        }
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(1);
    s.pop_until(200);
    printVector(s.v);

    return 0;
}