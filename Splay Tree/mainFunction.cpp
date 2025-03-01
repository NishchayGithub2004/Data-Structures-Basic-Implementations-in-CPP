#include "splay_tree.hpp"
#include "left_and_right_rotate.cpp"
#include "splay.cpp"
#include "insertNode.cpp"
#include "deleteNode.cpp"
#include "searchNode.cpp"
#include "traversal.cpp"

int main()
{
    SplayTree splay;
    int choice, value;

    cout << "\n\nMAIN MENU\n\n";
    cout << "1. Insert node";
    cout << "\n2. Delete node";
    cout << "\n3. Search node";
    cout << "\n4. Pre order traversal";
    cout << "\n5. In order traversal";
    cout << "\n6. Post order traversal";
    cout << "\n7. Exit";

    while (true)
    {
        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            cout << "\nEnter value to insert : ";
            cin >> value;
            splay.insertNode(value);
            break;

            case 2:
            cout << "\nEnter value to delete : ";
            cin >> value;
            splay.deleteNode(value);
            break;

            case 3:

            cout << "\nEnter value to search : ";
            cin >> value;
            splay.searchNode(value);
            break;

            case 4: splay.preOrder(); break;

            case 5: splay.inOrder(); break;

            case 6: splay.postOrder(); break;

            case 7: cout << "\nProgram exited successfully"; return 0;

            default: cout << "\nPlease enter a valid choice"; break;
        }
    }
}
