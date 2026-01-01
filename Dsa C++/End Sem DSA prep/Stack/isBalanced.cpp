#include <iostream>
#include <stack>
using namespace std;
bool isBalanced(string expr)
{
    stack<char> s;
    for (char ch : expr)
    {
        if (ch == '(' || ch == '[' || ch == '{')
        {
            s.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (s.empty())
                return false;
            char top = s.top();
            s.pop();
            if (ch == ')' && top != '(' || ch == '}' && top != '{' || ch == ']' && top != '[')
            {
                return false;
            }
        }
    }
    return s.empty();
}

int main()
{
    string expr = "(H([]))";
    bool result = isBalanced(expr);
    if (result)
    {
        cout << "Is Balanced" << endl;
    }
    else
    {
        cout << "Unbalanced" << endl;
    }

    return 0;
}