#include <iostream>
#include "vector"

using namespace std;

void shift(vector<int> &v, int k)
{
    for (int i = 0; i < k; ++i)
    {
        int change = v[0];
        v.erase(v.begin());
        v.push_back(change);
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    int k;
    cin >> k;

    shift(v, k);
    for (int i = 0; i < n; ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    for (int i = n - 1; i >= 0; --i)
    {
        cout << v[i] << " ";
    }
    return 0;
}