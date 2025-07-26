#include <iostream>
#include "vector"

using namespace std;

void printVector(vector<int> &v)
{
    for (int e : v)
    {
        cout << e << " ";
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> checked(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> checked[i];
    }

    vector<int> determine(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> determine[i];
    }

    vector<int> counts_in_bound;

    for (int each : determine)
    {
        int count = 0;
        for (int check : checked)
        {
            if (each - k <= check && check <= each + k)
            {
                count++;
            }
        }
        counts_in_bound.push_back(count);
    }
    printVector(counts_in_bound);
    return 0;
}