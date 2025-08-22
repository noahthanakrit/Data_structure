#include <iostream>
#include "set"
#include "vector"
#include "algorithm"
using namespace std;

set<int> all_nums_in_period;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m;
    cin >> n >> m;

    for (size_t i = 0; i < n; i++)
    {
        int initial, final;
        cin >> initial >> final;
        for (size_t i = initial; i <= final; i++)
        {
            all_nums_in_period.insert(i);
        }
    }

    while (m--)
    {
        int num;
        cin >> num;
        if (all_nums_in_period.find(num) != all_nums_in_period.end())
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }

    return 0;
}