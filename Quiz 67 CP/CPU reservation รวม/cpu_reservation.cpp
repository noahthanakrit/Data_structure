#include <iostream>
#include "vector"
#include "algorithm"
using namespace std;

bool isComplex(int a, int b, int c, int d)
{
    bool isComplicated = false;
    for (int i = c; i < d; ++i)
    {
        if (a <= i && i <= b)
        {
            isComplicated = true;
            break;
        }
    }
    return isComplicated;
}

int main()
{
    int N;
    cin >> N;

    vector<int> access;
    vector<pair<int, int>> period_times;
    for (int i = 1; i <= N; ++i)
    {
        int initial, final;
        cin >> initial >> final;
        pair<int, int> each = {initial, final};
        if (period_times.empty())
        {
            period_times.push_back(each);
            access.push_back(i);
        }
        else
        {
            if (!(isComplex(period_times.back().first, period_times.back().second, initial, final)))
            {
                access.push_back(i);
            }
        }
    }

    for (int each : access)
    {
        cout << each << " ";
    }
}