#include <iostream>
#include "unordered_map"
#include "vector"
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<string, int> bst;
    bst["length"] = 1;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        if (v[i] > n)
        {
            bst["length"]++;
        }
        cout << "max bucket length = " << bst["length"] << endl;
    }

    return 0;
}
