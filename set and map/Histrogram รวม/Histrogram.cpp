#include <iostream>
#include <map>
using namespace std;

int main()
{
    int N;
    cin >> N;

    map<string, int> frequency;

    for (int i = 0; i < N; ++i)
    {
        string name;
        cin >> name;
        frequency[name]++;
    }

    for (auto &[name, freq] : frequency)
    {
        if (freq > 1)
        {
            cout << name << " " << freq << endl;
        }
    }
    return 0;
}
