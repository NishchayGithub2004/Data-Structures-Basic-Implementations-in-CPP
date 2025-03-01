#include "XORLinkedList.hpp"
#include "deleteFromBeginning.cpp"
#include "deleteFromEnd.cpp"
#include "display.cpp"
#include "insertAtBeginning.cpp"
#include "insertAtEnd.cpp"
#include "search.cpp"
#include "update.cpp"
#include "predecessor.cpp"
#include "successor.cpp"

int main()
{
    XORLinkedList ll;
    int option;

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

    while (true)
    {   
        cout << "\n\nEnter your choice : ";
        cin >> option;

        switch(option)
        {
            case 1:
            
            ll.insertAtBeginning();
            break;

            case 2:

            ll.insertAtEnd();
            break;

            case 3:

            ll.deleteFromBeginning();
            break;

            case 4:

            ll.deleteFromEnd();
            break;

            case 5:

            ll.display();
            break;

            case 6:

            ll.search();
            break;

            case 7:

            ll.update();
            break;

            case 8:

            ll.predecessor();
            break;
            
            case 9:

            ll.successor();
            break;

            case 10:

            {
                cout << "\nProgram exited successfully";
                return 0;
            }

            default: 
            
            {
                cout << "\nPlease enter a valid option"; 
                break;
            }
        }
    }
}
