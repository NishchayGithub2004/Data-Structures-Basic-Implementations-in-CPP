#include<iostream>
#include<stack>
#include<sstream>
#include<cctype>
using namespace std;

int precedence(char op)
{
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

int applyOperation(int a, int b, char op)
{
    switch (op)
    {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }

    return 0;
}

int evaluateInfix(string s)
{
    stack<int> values;
    stack<char> ops;

    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
        {
            int num = 0;

            while (i < s.length() && isdigit(s[i]))
            {
                num = num * 10 + (s[i] - '0');
                i++;
            }

            i--;
            values.push(num);
        }

        else if (s[i] == '(') ops.push(s[i]);

        else if (s[i] == ')')
        {
            while (!ops.empty() && ops.top() != '(')
            {
                int val2 = values.top(); values.pop();
                int val1 = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                values.push(applyOperation(val1, val2, op));
            }

            ops.pop();
        }

        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            while (!ops.empty() && precedence(ops.top()) >= precedence(s[i]))
            {
                int val2 = values.top(); values.pop();
                int val1 = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                values.push(applyOperation(val1, val2, op));
            }

            ops.push(s[i]);
        }
    }

    while (!ops.empty())
    {
        int val2 = values.top(); values.pop();
        int val1 = values.top(); values.pop();
        char op = ops.top(); ops.pop();
        values.push(applyOperation(val1, val2, op));
    }

    return values.top();
}

int main()
{
    string s;
    cout << "Enter an infix expression : ";
    getline(cin,s);
    cout << "Evaluation of this infix expression gives : " << evaluateInfix(s);
    return 0;
}
