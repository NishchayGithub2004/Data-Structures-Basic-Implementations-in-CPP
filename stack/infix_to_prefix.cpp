#include<iostream>
#include<stack>
#include<algorithm>
#include<cctype>
using namespace std;

bool isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

int precedence(char op)
{
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

string infixToPrefix(string infix)
{
    stack<char> operators;
    stack<string> operands;

    for (int i = 0; i < infix.length(); i++)
    {
        char ch = infix[i];

        if (isspace(ch)) continue;

        if (isalnum(ch)) operands.push(string(1,ch));

        else if (ch == '(') operators.push(ch);

        else if (ch == ')')
        {
            while (!operators.empty() && operators.top() != '(')
            {
                string op2 = operands.top(); operands.pop();
                string op1 = operands.top(); operands.pop();
                char op = operators.top(); operators.pop();
                operands.push(op + op1 + op2);
            }

            operators.pop();
        }

        else if (isOperator(ch))
        {
            while (!operators.empty() && precedence(operators.top()) >= precedence(ch))
            {
                string op2 = operands.top(); operands.pop();
                string op1 = operands.top(); operands.pop();
                char op = operators.top(); operators.pop();
                operands.push(op + op1 + op2);
            }

            operators.push(ch);
        }
    }

    while (!operators.empty())
    {
        string op2 = operands.top(); operands.pop();
        string op1 = operands.top(); operands.pop();
        char op = operators.top(); operators.pop();
        operands.push(op + op1 + op2);
    }

    return operands.top();
}

int main()
{
    string infix;
    cout << "Enter an infix expression : ";
    cin >> infix;
    string prefix = infixToPrefix(infix);
    cout << "Prefix form of this expression is : " << prefix;
    return 0;
}
