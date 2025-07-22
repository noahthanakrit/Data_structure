#include <iostream>
#include <vector>
#include <algorithm>
#include "stack"
using namespace std;

void printVector(vector<int> &v)
{
    for (int each : v)
    {
        cout << each << " ";
    }
}

void mitosis(int a, int b, vector<int> &v)
{
    for (int i = a; i <= b; ++i)
    {
        v.push_back(v[i]);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
}

int main()
{
    int length, order;
    cin >> length >> order;

    vector<int> v(length);
    for (int i = 0; i < length; ++i)
    {
        cin >> v[i];
    }
    reverse(v.begin(), v.end());

    for (int i = 0; i < order; ++i)
    {
        int a, b;
        cin >> a >> b;
        mitosis(a, b, v);
    }
    sort(v.begin(), v.end());
    printVector(v);
    return 0;
}