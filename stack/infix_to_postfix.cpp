#include<iostream>
#include<string>
#include<stack>
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

string infixToPostfix(string infix)
{
    stack<char> operators;
    string postfix;

    for (int i = 0; i < infix.size(); i++)
    {
        char ch = infix[i];

        if (isspace(ch)) continue;

        if (isalnum(ch)) postfix += ch;

        else if (ch == '(') operators.push(ch);

        else if (ch == ')')
        {
            while (!operators.empty() && operators.top() != '(')
            {
                postfix += operators.top();
                operators.pop();
            }

            operators.pop();
        }

        else if (isOperator(ch))
        {
            while (!operators.empty() && precedence(operators.top()) >= precedence(ch) && operators.top() != '(')
            {
                postfix += operators.top();
                operators.pop();
            }

            operators.push(ch);
        }
    }

    while (!operators.empty())
    {
        postfix += operators.top();
        operators.pop();
    }

    return postfix;
}

int main()
{
    string infix;
    cout << "Enter an infix expression : ";
    cin >> infix;
    string postfix = infixToPostfix(infix);
    cout << "Postfix form of this expression is : " << postfix;
    return 0;
}
