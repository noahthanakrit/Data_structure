
#include <iostream>
using namespace std;

int main()
{
    pair<int, string> a;
    pair<int, string> b;

    int n1, n2;
    string s1, s2;
    cin >> n1 >> s1 >> n2 >> s2;

    a = {n1, s1};
    b = {n2, s2};

    bool result = false;

    if (a.first == b.first && a.second.size() == b.second.size())
    {
        result = true;
    }
    else if (a.first > b.first || (a.first == b.first && a.second.size() > b.second.size()))
    {
        result = true;
    }
    cout << result << endl;
}