#include <iostream>
#include <vector>
#include "stack"
#include "algorithm"
using namespace std;

void reverseStack(stack<int> &s, size_t first, size_t last)
{
    vector<int> temp;

    while (!s.empty())
    {
        temp.push_back(s.top());
        s.pop();
    }

    if (first < last)
    {
        if (last > temp.size())
        {
            reverse(temp.begin() + first, temp.end());
        }
        else
        {
            reverse(temp.begin() + first, temp.begin() + last + 1);
        }
    }

    for (int each : temp)
    {
        s.push(each);
    }
}

int main()
{
    int first, last;
    cin >> first >> last;

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    reverseStack(s, first, last);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
