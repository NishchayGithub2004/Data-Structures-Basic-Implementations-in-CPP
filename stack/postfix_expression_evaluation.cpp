#include<iostream>
#include<stack>
#include<sstream>
#include<cctype>
using namespace std;

int evaluatePostfix(string s)
{
    stack<int> stk;

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
            stk.push(num);
        }

        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            int operand2 = stk.top(); stk.pop();
            int operand1 = stk.top(); stk.pop();

            switch (s[i])
            {
                case '+': stk.push(operand1 + operand2); break;
                case '-': stk.push(operand1 - operand2); break;
                case '*': stk.push(operand1 * operand2); break;
                case '/': stk.push(operand1 / operand2); break;
            }
        }
    }

    return stk.top();
}

int main()
{
    string s;
    cout << "Enter a postfix expression : ";
    getline(cin,s);
    cout << "Evaluation of postfix expression gives : " << evaluatePostfix(s);
    return 0;
}
