#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <set>

using namespace std;

vector<int> splitToInt(const string &input)
{
    vector<int> numbers;
    stringstream ss(input);
    int num;

    while (ss >> num)
    {
        numbers.push_back(num);
    }

    return numbers;
}

int main()
{
    string l1;
    string l2;
    string l3;

    getline(cin, l1);
    getline(cin, l2);
    getline(cin, l3);

    vector<int> v2 = splitToInt(l2);
    vector<int> v3 = splitToInt(l3);

    set<int> sum;
    for (int i = 0; i < v2.size(); i++)
    {
        for (int j = 0; j < v2.size(); j++)
        {
            if (i != j)
            {
                sum.insert(v2[i] + v2[j]);
            }
        }
    }

    for (int a : v3)
    {
        if (find(sum.begin(), sum.end(), a) != sum.end())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}