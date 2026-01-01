#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string expr)
{
    stack<char> s;
    for (char ch : expr)
    {
        // If opening bracket, push to stack
        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        // If closing bracket, check top of stack
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (s.empty())
                return false; // No matching opening bracket

            char top = s.top();
            s.pop();

            // Check if brackets match
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '['))
                return false;
        }
    }

    // If stack is empty → all brackets matched
    return s.empty();
}

int main()
{
    string expr;
    cout << "Enter an expression: ";
    cin >> expr;

    if (isBalanced(expr))
        cout << "Balanced Parentheses " << endl;
    else
        cout << "Unbalanced Parentheses" << endl;

    return 0;
}
