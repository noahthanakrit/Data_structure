#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

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
    string length;
    vector<int> length_list;
    vector<int> l1;
    vector<int> l2;

    length_list = splitToInt(length);
    string s1;
    string s2;

    getline(cin, length);
    getline(cin, s1);
    getline(cin, s2);

    l1 = splitToInt(s1);
    l2 = splitToInt(s2);

    vector<int> result;
    for (int i = 0; i < l1.size(); i++)
    {
        if (find(l1.begin(), l1.end(), l2[i]) != l1.end() && find(result.begin(), result.end(), l2[i]) == result.end())
        {
            result.push_back(l2[i]);
        }
    }

    sort(result.begin(), result.end());

    for (int r : result)
    {
        cout << r << " ";
    }
    return 0;
}