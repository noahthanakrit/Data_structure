#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    map<string, int> freq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        getline(cin, name);
        if (freq.find(name) != freq.end())
        {
            freq[name] += 1;
        }
        else
        {
            freq[name] = 1;
        }
    }
    cout << endl;

    vector<pair<int, string>> result;
    for (auto j : freq)
    {
        pair<int, string> each = {j.second, j.first};
        result.push_back(each);
    }
    sort(result.begin(), result.end());
    pair<int, string> maximum = result.back();
    cout << maximum.second << " " << maximum.first << endl;
}