#include <iostream>
#include "vector"
#include "algorithm"
#include "unordered_map"
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<int, vector<int>> numbers;
    vector<int> initial;
    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        initial.push_back(num);
        numbers[num] = {};
    }

    vector<int> sorted = initial;
    sort(sorted.begin(), sorted.end());
    for (int j = 1; j <= n; ++j)
    {
        numbers[sorted[j - 1]].push_back(j);
    }

    for (int each : initial)
    {
        cout << numbers[each][0] << " ";
        numbers[each].erase(numbers[each].begin());
    }
    return 0;
}