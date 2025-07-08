#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void printVector(vector<int> all)
{
    for (int each : all)
    {
        cout << each;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    vector<int> temp = v;
    sort(temp.begin(), temp.end());

    vector<int> num;
    for (int a : temp)
    {
        if (find(num.begin(), num.end(), a) == num.end())
        {
            num.push_back(a);
        }
    }

    map<int, vector<int>> pos;
    for (int b : num)
    {
        for (int j = 0; j < temp.size(); j++)
        {
            if (b == temp[j])
            {
                pos[b].push_back(j + 1);
            }
        }
    }

    vector<int> result;
    for (int k = 0; k < v.size(); k++)
    {
        if (!pos[v[k]].empty())
        {
            result.push_back(pos[v[k]].front());
            pos[v[k]].erase(pos[v[k]].begin());
        }
    }

    for (int r : result)
    {
        cout << r << " ";
    }
}
