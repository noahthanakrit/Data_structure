#include <iostream>
#include "vector"
using namespace std;

int quickSum(vector<vector<int>> &v, int r1, int c1, int r2, int c2)
{
    int total_bound = 0;
    for (int i = r1; i <= r2; ++i)
    {
        for (int j = c1; j <= c2; ++j)
        {
            total_bound += v[i][j];
        }
    }
    return total_bound;
}

int main()
{
    int N, M, K;
    cin >> N >> M >> K;

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

    for (int k = 0; k < K; ++k)
    {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        cout << quickSum(v, r1, c1, r2, c2) << endl;
    }
}