#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int chooseShoe(int feet, vector<int> size_shoes)
{
    int suitable_size = -1;
    int min_diff;

    for (int shoe_size : size_shoes)
    {
        if (shoe_size >= feet)
        {
            int diff = shoe_size - feet;
            if (diff < min_diff)
            {
                min_diff = diff;
                suitable_size = shoe_size;
            }
        }
    }

    if (suitable_size == -1)
    {
        suitable_size = *max_element(size_shoes.begin(), size_shoes.end());
    }

    return suitable_size;
}

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> size_shoes(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> size_shoes[i];
    }

    vector<int> size_feet(M);
    for (int j = 0; j < M; ++j)
    {
        cin >> size_feet[j];
    }

    for (int j = 0; j < M; ++j)
    {
        cout << chooseShoe(size_feet[j], size_shoes);
        if (j < M - 1)
            cout << " ";
    }
    cout << endl;

    return 0;
}