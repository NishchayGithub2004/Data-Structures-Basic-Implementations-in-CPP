#include<iostream>
using namespace std;
const int n = 5;

class Queue
{
    private:

    int arr[n];
    int front;
    int rear;

    public: Queue() : front(-1), rear(-1) {}

    void enqueue()
    {
        int value;
        cout << "\nEnter value to enqueue : ";
        cin >> value;

        if ((rear + 1) % n == front)
        {
            cout << "\nQueue is full";
            return;
        }

        if (front == -1) front = 0;

        rear = (rear + 1) % n;
        arr[rear] = value;
        cout << "\n" << value << " enqueued successfully";
    }

    void dequeue()
    {
        if (front == -1)
        {
            cout << "\nQueue is empty";
            return;
        }

        cout << "\n" << arr[front] << " dequeued successfully";

        if (front == rear) front = rear = -1;

        else front = (front + 1) % n;
    }

    void peek()
    {
        if (front == -1) cout << "\nQueue is empty";

        else cout << "\nFrontmost element of the queue is " << arr[front];
    }

    void display()
    {
        if (front == -1)
        {
            cout << "\nQueue is empty";
            return;
        }

        cout << "\nQueue elements are : ";

        int i = front;

        while (true)
        {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % n;
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