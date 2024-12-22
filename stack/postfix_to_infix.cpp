#include<iostream>
#include<string>
#include<stack>
#include<cctype>
using namespace std;

bool isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

string postfixToInfix(string postfix)
{
    stack<string> stk;

    for (int i = 0; i < postfix.length(); i++)
    {
        if (isalnum(postfix[i]))
        {
            string operand(1, postfix[i]);
            stk.push(operand);
        }

        else if (isOperator(postfix[i]))
        {
            string operand2 = stk.top(); stk.pop();
            string operand1 = stk.top(); stk.pop();
            string expression = "(" + operand1 + postfix[i] + operand2 + ")";
            stk.push(expression);
        }
    }

    return stk.top();
}

int main()
{
    string postfix;
    cout << "Enter a postfix expression : ";
    getline(cin, postfix);
    cout << "Infix expression of this postfix expression : " << postfixToInfix(postfix);
    return 0;
}
