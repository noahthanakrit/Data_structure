#include <iostream>
#include "stack"
#include "vector"
using namespace std;

vector<int> stack_to_vector(stack<int> s)
{
    vector<int> v;
    while (!s.empty())
    {
        v.push_back(s.top());
        s.pop();
    }
    return v;
}

void compare_reserve(stack<int> a, stack<int> b)
{
    vector<int> va = stack_to_vector(a);
    vector<int> vb = stack_to_vector(b);

    int reserve_a = (int)va.capacity() - (int)a.size();
    int reserve_b = (int)vb.capacity() - (int)b.size();

    if (reserve_a < reserve_b)
    {
        cout << -1 << endl;
    }
    else if (reserve_a == reserve_b)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> va(n);
    stack<int> a;
    for (int i = 0; i < n; ++i)
    {
        cin >> va[i];
        a.push(va[i]);
    }

    vector<int> vb(m);
    stack<int> b;
    for (int i = 0; i < m; ++i)
    {
        cin >> vb[i];
        b.push(vb[i]);
    }

    compare_reserve(a, b);
    return 0;
}