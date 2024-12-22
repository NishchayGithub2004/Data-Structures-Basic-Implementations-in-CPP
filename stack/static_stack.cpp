#include<iostream>
using namespace std;
const int n = 5;

class Stack
{
    private:

    int arr[n];
    int top;

    public: Stack() {top = -1;}

    void push()
    {
        int value;
        cout << "\nEnter value to push : ";
        cin >> value;

        if (top == n - 1) cout << "\nStack overflow";

        else
        {
            arr[++top] = value;
            cout << "\n" << value << " pushed to the stack";
        }
    }

    void pop()
    {
        if (top == -1) cout << "\nStack underflow";

        else cout << "\nTopmost element of the stack " << arr[top--] << " popped from the stack";
    }

    void peek()
    {
        if (top == -1) cout << "\nStack is empty";

        else cout << "\nTopmost element of the stack is " << arr[top];
    }

    void display()
    {
        if (top == -1) cout << "\nStack is empty";

        else
        {
            cout << "\nElement of the stack (from top to bottom) are : ";

            for (int i = top; i >= 0; i--) cout << arr[i] << " ";
        }
    }
};

int main()
{
    Stack stack;
    int choice;

    while (true)
    {
        cout << "\n\nMAIN MENU\n\n";
        cout << "1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Peek";
        cout << "\n4. Display";
        cout << "\n5. Exit";

        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1: stack.push(); break;

            case 2: stack.pop(); break;

            case 3: stack.peek(); break;

            case 4: stack.display(); break;

            case 5: cout << "\nProgram exited successfully"; return 0;

            default: cout << "\nPlease enter a valid option"; break;
        }
    }
}