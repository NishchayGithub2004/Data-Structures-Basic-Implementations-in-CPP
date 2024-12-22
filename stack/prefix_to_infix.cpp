#include<iostream>
#include<stack>
#include<string>
#include<cctype>
using namespace std;

bool isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

string prefixToInfix(string prefix)
{
    stack<string> stk;

    for (int i = prefix.length() - 1; i >= 0; i--)
    {
        if (isalnum(prefix[i]))
        {
            string operand(1, prefix[i]);
            stk.push(operand);
        }

        else if (isOperator(prefix[i]))
        {
            string operand1 = stk.top(); stk.pop();
            string operand2 = stk.top(); stk.pop();
            string expression = "(" + operand1 + prefix[i] + operand2 + ")";
            stk.push(expression);
        }
    }

    return stk.top();
}

int main()
{
    string prefix;
    cout << "Enter a prefix expression : ";
    getline(cin, prefix);
    cout << "Infix expression of this expression is : " << prefixToInfix(prefix);
    return 0;
}
