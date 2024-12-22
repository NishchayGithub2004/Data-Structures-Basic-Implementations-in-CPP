#include<iostream>
#include<stack>
#include<sstream>
#include<cctype>
using namespace std;

int evaluatePrefix(string s)
{
    stack<int> stk;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (isdigit(s[i]))
        {
            int num = 0;
            int factor = 1;

            while (i >= 0 && isdigit(s[i]))
            {
                num += (s[i] - '0') * factor;
                factor *= 10;
                i--;
            }

            i++;
            stk.push(num);
        }

        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            int operand1 = stk.top(); stk.pop();
            int operand2 = stk.top(); stk.pop();

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
    cout << "Enter a prefix expression : ";
    getline(cin,s);
    cout << "Evaluation of this prefix expression gives : " << evaluatePrefix(s);
    return 0;
}
