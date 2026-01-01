#include <iostream>
#include <stack>
using namespace std;
int prec(char c)
{
    if (c == '^')
        return 3;
    if (c == '*' || c == '/')
        return 2;
    if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {

        return -1;
    }
}

void infixToPostfix(string expr)
{
    stack<char> s;
    string result;
    for (char ch : expr)
    {
        if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || ch >= 0 && ch <= 9)
        {
            result += ch;
        }
        else if (ch == '(')
        {
            s.push(ch);
        }
        else if (ch == ')')
        {
            while (s.top() != '(')
            {
                result += s.top();
                s.pop();
            }
            s.pop();
        }
        else
        {
            while (!s.empty() && prec(s.top()) >= prec(ch))
            {
                result += s.top();
                s.pop();
            }
            s.push(ch);
        }
    }
    while (!s.empty())
    {
        result += s.top();
        s.pop();
    }
    cout << "Postfix Expr: " << result << endl;
}
int main()
{
    string expr = "a+b*(c^d-e)";
    infixToPostfix(expr);

    return 0;
}