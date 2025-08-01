#include <iostream>
#include "vector"
#include "algorithm"
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    bool isOneToOne = true;
    for (int each : v)
    {
        if (std::count(v.begin(), v.end(), each) > 1)
        {
            isOneToOne = false;
            break;
        }
    }

    if (isOneToOne)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
