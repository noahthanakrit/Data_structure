#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;

    vector<int> a(M);
    vector<int> b(N);

    for (int i = 0; i < M; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < N; j++)
    {
        cin >> b[j];
    }

    set<int> result;
    for (int n = 0; n < a.size(); n++)
    {
        if (find(b.begin(), b.end(), a[n]) != b.end())
        {
            result.insert(a[n]);
        }
    }

    for (int integer : result)
    {
        cout << integer << " ";
    }
}