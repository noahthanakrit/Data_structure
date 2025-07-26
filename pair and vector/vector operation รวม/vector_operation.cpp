#include <iostream>
#include "vector"
#include "algorithm"

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int count;
    cin >> count;

    vector<int> v;
    for (int i = 0; i < count; ++i)
    {
        string order;
        cin >> order;

        if (order == "pb")
        {
            int num;
            cin >> num;
            v.push_back(num);
        }
        else if (order == "sa")
        {
            sort(v.begin(), v.end());
        }
        else if (order == "sd")
        {
            sort(v.begin(), v.end(), greater<int>());
        }
        else if (order == "r")
        {
            reverse(v.begin(), v.end());
        }
        else if (order == "d")
        {
            int index;
            cin >> index;
            v.erase(v.begin() + index);
        }
    }

    for (int e : v)
    {
        cout << e << " ";
    }
    return 0;
}