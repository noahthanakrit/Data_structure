#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<char> parentheses;
    bool result = true;

    string s;
    cin >> s;

    for (char &c : s)
    {
        if (c == '{' || c == '[' || c == '(')
        {
            parentheses.push(c);
        }
        else if (c == '}' || c == ']' || c == ')')
        {

            if (parentheses.empty())
            {
                result = false;
                break;
            }
            char top = parentheses.top();

            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{'))
            {
                result = false;
                break;
            }
            else
            {
                parentheses.pop();
            }
        }
    }
    if (!(parentheses.empty() && s.size() > 1 && s.at(0) != ')' && s.at(0) != '}' && s.at(0) != ']'))
    {
        result = false;
    }

    cout << (result ? "true" : "false") << endl;
    return 0;
}
