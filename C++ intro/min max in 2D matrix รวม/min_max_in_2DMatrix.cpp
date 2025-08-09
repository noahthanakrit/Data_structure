#include <iostream>
#include "vector"
#include "algorithm"
using namespace std;

bool isValid(int r1, int c1, int r2, int c2)
{
    if (r1 > r2 || c1 > c2)
    {
        return false;
    }
    return true;
}

bool isOutsize(int N, int M, int r1, int c1, int r2, int c2)
{
    if (r1 > N || c1 > M)
    {
        return true;
    }
    return false;
}

int findMax(vector<vector<int>> &v, int r1, int c1, int r2, int c2)
{
    int maximum = v[r1 - 1][c1 - 1];
    if (r2 > v.size())
    {
        r2 = v.size();
    }
    if (c2 > v[0].size())
    {
        c2 = v[0].size();
    }

    for (int i = r1 - 1; i < r2; ++i)
    {
        for (int j = c1 - 1; j < c2; ++j)
        {
            maximum = max(maximum, v[i][j]);
        }
    }
    return maximum;
}

int main()
{
    int N, M;
    int test;

    cin >> N >> M;
    cin >> test;

    vector<vector<int>> v;
    for (int i = 0; i < N; ++i)
    {
        vector<int> each(M);
        for (int j = 0; j < M; ++j)
        {
            cin >> each[j];
        }
        v.push_back(each);
    }

    for (int k = 0; k < test; ++k)
    {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;

        if (!isValid(r1, c1, r2, c2))
        {
            cout << "INVALID" << endl;
        }
        else if (isOutsize(N, M, r1, c1, r2, c2))
        {
            cout << "OUTSIZE" << endl;
        }
        else
        {
            cout << findMax(v, r1, c1, r2, c2) << endl;
        }
    }
}