#include <iostream>
#include "stack"
#include "queue"
#include "vector"
using namespace std;

void printVector(vector<int> v)
{
    for (int integer : v)
    {
        cout << integer << " ";
    }
}

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> vN(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> vN[i];
    }

    vector<int> vK(K);
    queue<int> pos_remove;
    for (int j = 0; j < K; ++j)
    {
        cin >> vK[j];
        pos_remove.push(vK[j]);
    }

    vector<int> result;
    int k = 0;
    while (!pos_remove.empty())
    {
        if (k != pos_remove.front())
        {
            result.push_back(vN[k]);
        }
        else
        {
            pos_remove.pop();
        }
        k++;
    }

    printVector(result);
    return 0;
}