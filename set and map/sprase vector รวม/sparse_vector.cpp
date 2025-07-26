#include <iostream>
#include <vector>
#include <map>
using namespace std;

void insert_into_sv(map<int, int> &v, int pos, int value)
{
    if (v.find(pos) == v.end())
    {
        v[pos] = value;
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        if (it->first > pos)
        {
            int data = v[it->first];
            v.erase(it->first);
            v[it->first + 1] = data;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    map<int, int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        insert_into_sv(v, a, b);
    }
    cout << v.size() << "\n";
    for (auto &x : v)
    {
        cout << x.first << ": " << x.second << "\n";
    }
    return 0;
}