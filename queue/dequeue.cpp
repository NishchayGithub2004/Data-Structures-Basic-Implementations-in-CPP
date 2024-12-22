#include<iostream>
using namespace std;
const int n = 5;

class Dequeue
{
    private:

    int arr[n];
    int front;
    int rear;
    int size;

    public: Dequeue() : front(-1), rear(-1), size(0) {}

    void enqueueFront()
    {
        if (size == n)
        {
            cout << "\nDequeue is full";
            return;
        }

        int value;
        cout << "\nEnter value to insert at front : ";
        cin >> value;

        if (front == -1) front = rear = 0;

        else front = (front - 1 + n) % n;

        arr[front] = value;
        size++;
    }

    void enqueueRear()
    {
        if (size == n)
        {
            cout << "\nDequeue is full";
            return;
        }

        int value;
        cout << "\nEnter value to insert at rear : ";
        cin >> value;

        if (front == -1) front = rear = 0;

        else rear = (rear + 1) % n;

        arr[rear] = value;
        size++;
    }

    void dequeueFront()
    {
        if (size == 0)
        {
            cout << "\nDequeue is empty";
            return;
        }

        cout << "\nDeleted front element " << arr[front];

        if (front == rear) front = rear = -1;

        else front = (front + 1) % n;

        size--;
    }

    void dequeueRear()
    {
        if (size == 0)
        {
            cout << "\nDequeue is empty";
            return;
        }

        cout << "\nDeleted rear element " << arr[rear];

        if (front == rear) front = rear = -1;

        else rear = (rear - 1 + n) % n;

        size--;
    }

    void peekFront()
    {
        if (size == 0)
        {
            cout << "\nDequeue is empty";
            return;
        }

        cout << "\nFront element of the dequeue is " << arr[front];
    }

    void peekRear()
    {
        if (size == n)
        {
            cout << "\nDequeue is empty";
            return;
        }

        cout << "\nRear element of the dequeue is " << arr[rear];
    }

    void displayFrontToRear()
    {
        if (size == 0)
        {
            cout << "\nDequeue is empty";
            return;
        }

        cout << "\nElements of dequeue from front to rear are : ";

        for (int i = 0; i < size; i++) cout << arr[(front + i) % n] << " ";
    }

    void displayRearToFront()
    {
        if (size == 0)
        {
            cout << "\nDequeue is empty";
            return;
        }

        cout << "\nElements of dequeue from rear to front are : ";

        for (int i = 0; i < size; i++) cout << arr[(rear - i + n) % n] << " ";
    }
};

int main()
{
    Dequeue dq;
    int choice;

    while (true)
    {
        cout << "\n\nMAIN MENU\n\n";
        cout << "1. Enqueue at front";
        cout << "\n2. Enqueue at rear";
        cout << "\n3. Dequeue from front";
        cout << "\n4. Dequeue from rear";
        cout << "\n5. Front element";
        cout << "\n6. Rear element";
        cout << "\n7. Display elements from front to rear";
        cout << "\n8. Display elements from rear to front";
        cout << "\n9. Exit";

        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1: dq.enqueueFront(); break;
            case 2: dq.enqueueRear(); break;
            case 3: dq.dequeueFront(); break;
            case 4: dq.dequeueRear(); break;
            case 5: dq.peekFront(); break;
            case 6: dq.peekRear(); break;
            case 7: dq.displayFrontToRear(); break;
            case 8: dq.displayRearToFront(); break;
            case 9: cout << "\nProgram exited successfully"; return 0;
            default: cout << "\nPlease enter a valid option"; break;
        }
    }
}
