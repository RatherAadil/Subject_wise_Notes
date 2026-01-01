#include <iostream>
#include <stack>
using namespace std;
int prec(char ch)
{
    if (ch == '^')
        return 3;
    if (ch == '*' || ch == '/')
        return 2;
    if (ch == '+' || ch == '-')
        return 1;
    else
    {
        return -1;
    }
}
void infixToPostfix(string expr)
{
    stack<char> s;
    string result;

    for (int i = 0; i < expr.length(); i++)
    {
        char ch = expr[i];
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= 0 && ch <= 9)
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
    cout << "Postfix Exp: " << result << endl;
}
int main()
{
    string expr = "a+b*(c^d-e)";
    infixToPostfix(expr);
    return 0;
}