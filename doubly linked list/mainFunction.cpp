#include "doubly_linked_list.hpp"
#include "insertAtBeginning.cpp"
#include "insertAtEnd.cpp"
#include "deleteFromBeginning.cpp"
#include "deleteFromEnd.cpp"
#include "search.cpp"
#include "update.cpp"
#include "display.cpp"
#include "predecessor.cpp"
#include "successor.cpp"

int main()
{
    DoublyLinkedList list;
    int value, oldValue, newValue, choice;

    while (true)
    {
        cout << "\n\nMAIN MENU\n\n";
        cout << "1. Insert at beginning";
        cout << "\n2. Insert at end";
        cout << "\n3. Delete from beginning";
        cout << "\n4. Delete from end";
        cout << "\n5. Search a node";
        cout << "\n6. Update a node";
        cout << "\n7. Display nodes";
        cout << "\n8. Predecessor of a node";
        cout << "\n9. Successor of a node";
        cout << "\n10. Exit";
        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:

            cout << "\nEnter value to insert at the beginning : ";
            cin >> value;
            list.insertAtBeginning(value);
            break;

            case 2:

            cout << "\nEnter value to insert at the end : ";
            cin >> value;
            list.insertAtEnd(value);
            break;

            case 3:

            list.deleteFromBeginning();
            break;

            case 4:

            list.deleteFromEnd();
            break;

            case 5:

            cout << "\nEnter value to search for : ";
            cin >> value;
            list.search(value);
            break;

            case 6:

            cout << "\nEnter value to replace : ";
            cin >> oldValue;

            cout << "\nEnter value that will replace : ";
            cin >> newValue;

            list.update(oldValue,newValue);
            break;

            case 7:

            list.display();
            break;

            case 8:

            cout << "\nEnter value to find predecessor of : ";
            cin >> value;
            list.predecessor(value);
            break;

            case 9:

            cout << "\nEnter value to find successor of : ";
            cin >> value;
            list.successor(value);
            break;

            case 10:

            cout << "\nProgram exited successfully";
            return 0;

            default:

            cout << "\nPlease enter a valid option";
            break;
        }
    }
}