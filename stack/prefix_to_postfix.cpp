#include<iostream>
#include<stack>
#include<cctype>
using namespace std;

bool isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

string prefixToPostfix(string prefix)
{
    stack<string> stk;

    for (int i = prefix.length(); i >= 0; i--)
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
            string expression = operand1 + operand2 + prefix[i];
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
    cout << "Postfix expression of this expression is : " << prefixToPostfix(prefix);
    return 0;
}
