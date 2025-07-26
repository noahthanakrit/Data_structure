#include <iostream>
#include "queue"
#include "vector"
#include "algorithm"
using namespace std;

void min_element(vector<int> &nums)
{
    int minimum = nums[0];
    for (int each : nums)
    {
        minimum = min(minimum, each);
    }
    cout << minimum;
}

int atQueue(int pos, queue<int> q)
{
    if (pos < q.size())
    {
        int i = 0;
        while (i < pos)
        {
            q.pop();
            i++;
        }
    }
    return q.front();
}

int main()
{
    int n, m;
    cin >> n >> m;

    queue<int> q;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        q.push(v[i]);
    }

    vector<int> selected;
    vector<int> pos(m);
    for (int j = 0; j < m; ++j)
    {
        cin >> pos[m];
        selected.push_back(atQueue(pos[m], q));
    }

    min_element(selected);
    return 0;
}