#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]] = v[i];
    }

    int initial, finish;
    cin >> initial >> finish;

    for (const auto &key : m)
    {
        if (key.first >= initial && key.first <= finish)
        {
            cout << key.second << " ";
        }
    }
    return 0;
}