#include <iostream>
#include <vector>
#include "algorithm"
using namespace std;

void addVector(vector<int> &v, int initial, int final)
{
    for (int i = initial; i < final; ++i)
    {
        v.push_back(i);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        v[i] = i;
    }

    vector<int> erase_number;
    for (int j = 0; j < m; ++j)
    {
        int initial, final;
        cin >> initial >> final;
        addVector(erase_number, initial, final);
    }

    for (int each : erase_number)
    {
        if (find(v.begin(), v.end(), each) != v.end())
        {
            auto it = find(v.begin(), v.end(), each);
            v.erase(it);
        }
    }

    for (int result : v)
    {
        cout << result << endl;
    }
    return 0;
}
