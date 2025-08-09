#include <iostream>
#include "vector"
#include "algorithm"
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end());
    int divide = 1;
    n -= v[0];
    while (n > 0)
    {
        if (n == v[1] == v[2] && n % v[0] != 0)
        {
            n -= v[1];
        }
        else if (n == v[2] && n % v[0] != 0)
        {
            n -= v[2];
        }
        else if (n == v[1] && n % v[0] != 0)
        {
            n -= v[1];
        }
        else
        {
            n -= v[0];
        }
        divide++;
    }
    cout << divide << endl;
}