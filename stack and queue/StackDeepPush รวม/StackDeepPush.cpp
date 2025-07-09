#include <iostream>
#include "stack"
#include "vector"
using namespace std;

void PrintStack(stack<int> s)
{
    vector<int> v;
    while (!s.empty())
    {
        v.push_back(s.top());
        s.pop();
    }

    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void deep_push(int pos, int value, stack<int> &s)
{
    vector<int> v;
    while (!s.empty())
    {
        v.push_back(s.top());
        s.pop();
    }
    v.insert(v.begin() + pos, value);
    for (int i = v.size() - 1; i >= 0; i--)
    {
        s.push(v[i]);
    }
    cout << endl;
}

int main()
{
    stack<int> s;
    while (true)
    {
        char order;
        cin >> order;
        if (order == 'u')
        {
            int num;
            cin >> num;
            s.push(num);
        }
        else if (order == 'p')
        {
            cout << "Stack size = " << s.size() << " Data: ";
            PrintStack(s);
        }
        else if (order == 'd')
        {
            int pos, value;
            cin >> pos >> value;
            deep_push(pos, value, s);
        }
        else if (order == 'o')
        {
            s.pop();
        }
        else if (order == 'q')
        {
            break;
        }
    }
    return 0;
}