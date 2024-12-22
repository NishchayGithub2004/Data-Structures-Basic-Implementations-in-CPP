#include<iostream>
using namespace std;

class Node
{
    public:

    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class Queue
{
    private: Node *front, *rear;

    public: Queue() : front(nullptr), rear(nullptr) {}

    void enqueue()
    {
        int value;
        cout << "\nEnter value to enqueue : ";
        cin >> value;

        Node* newNode = new Node(value);

        if (!rear) front = rear = newNode;

        else
        {
            rear->next = newNode;
            rear = newNode;
        }

        cout << "\n" << value << " enqueued successfully";
    }

    void dequeue()
    {
        if (!front)
        {
            cout << "\nQueue is empty";
            return;
        }

        Node* temp = front;
        cout << "\n" << temp->data << " dequeued successfully";

        front = front->next;

        if (!front) rear = nullptr;

        delete temp;
    }

    void peek()
    {
        if (!front) cout << "\nQueue is empty";

        else cout << "\nFrontmost element of the queue is " << front->data;
    }

    void display()
    {
        if (!front)
        {
            cout << "\nQueue is empty";
            return;
        }

        cout << "\nQueue elements are : ";

        Node* temp = front;

        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    Queue q;
    int choice;

    while (true)
    {
        cout << "\n\nMAIN MENU\n\n";
        cout << "1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Peek";
        cout << "\n4. Display";
        cout << "\n5. Exit";

        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1: q.enqueue(); break;

            case 2: q.dequeue(); break;

            case 3: q.peek(); break;

            case 4: q.display(); break;

            case 5: cout << "\nProgram exited successfully"; return 0;

            default: cout << "\nPlease enter a valid option";
        }
    }
}
