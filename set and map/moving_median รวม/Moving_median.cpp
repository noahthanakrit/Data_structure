#include <iostream>
#include "vector"
#include "algorithm"
using namespace std;

void PrintVector(vector<int> v)
{
    for (int e : v)
    {
        cout << e << " ";
    }
    cout << endl;
};

bool sameAllElement(vector<int> v)
{
    bool same = true;
    int compare = v[0];
    for (int i : v)
    {
        if (i != compare)
        {
            same = false;
            break;
        }
    }
    return same;
}

int main()
{
    int n, w;
    cin >> n >> w;
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    if (sameAllElement(v))
    {
        cout << v[0] << endl;
    }
    else
    {
        vector<int> result;
        auto i = v.begin();
        while (i != v.end() - w)
        {
            vector<int> each(i, i + w + 1);
            sort(each.begin(), each.end());
            if (each.size() % 2 != 0)
            {
                int middle = each[each.size() / 2];
                result.push_back(middle);
            }
            else
            {
                int middle = (each[each.size() / 2 - 1] + each[each.size() / 2]) / 2;
                result.push_back(middle);
            }
            *i++;
        }

        PrintVector(result);
    }

    return 0;
}
