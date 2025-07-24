#include <iostream>
#include "vector"
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        v.push_back(0);
    }
    int size = (int)v.size();
    int capacity = (int)v.capacity();
    cout << capacity - size << endl;
    return 0;
}