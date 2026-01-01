#include <iostream>
#include <stack>
using namespace std;
int PE(string expr)
{
    stack<int> s;
    for (char ch : expr)
    {
        if (isdigit(ch))
        {
            s.push(ch - '0');
        }
        else
        {
            int val2 = s.top();
            s.pop();
            int val1 = s.top();
            s.pop();

            switch (ch)
            {
            case '+':
                s.push(val1 + val2);
                break;
            case '-':
                s.push(val1 - val2);
                break;
            case '*':
                s.push(val1 * val2);
                break;
            case '/':
                s.push(val1 / val2);
                break;
            }
        }
    }
    return s.top();
}
int main()
{
    string expr = "23*84/+";
    int result = PE(expr);
    cout << "Result: " << result;
    return 0;
}