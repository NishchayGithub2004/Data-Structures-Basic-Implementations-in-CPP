#include<iostream>
using namespace std;

class Node
{
    public:

    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class Stack
{
    private: Node* top;

    public: Stack() : top(nullptr) {}

    void push()
    {
        int value;
        cout << "\nEnter value to push : ";
        cin >> value;

        Node* newNode = new Node(value);

        newNode->next = top;
        top = newNode;
        cout << "\n" << value << " pushed to the stack";
    }

    void pop()
    {
        if (!top)
        {
            cout << "\nStack underflow";
            return;
        }

        else
        {
            Node* temp = top;
            int value = temp->data;
            top = top->next;
            delete temp;
            cout << "\nTopmost element " << value << " popped from the stack";
        }
    }

    void peek()
    {
        if (!top)
        {
            cout << "\nStack is empty";
            return;
        }

        cout << "\nTopmost element of the stack is " << top->data;
    }

    void display()
    {
        if (!top)
        {
            cout << "\nStack is empty";
            return;
        }

        Node* temp = top;

        cout << "\nElements of the stack from top to bottom are : ";

        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
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
