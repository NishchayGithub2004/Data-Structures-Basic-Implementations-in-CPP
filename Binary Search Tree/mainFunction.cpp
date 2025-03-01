#include "BST.hpp"
#include "insertNode.cpp"
#include "deleteNode.cpp"
#include "searchNode.cpp"
#include "preOrder.cpp"
#include "inOrder.cpp"
#include "postOrder.cpp"

int main()
{
    BST bst;
    int choice, value;

    while (true)
    {
        cout << "\n\nMAIN MENU\n\n";
        cout << "1. Insert node";
        cout << "\n2. Delete node";
        cout << "\n3. Search node";
        cout << "\n4. Pre order traversal";
        cout << "\n5. In order traversal";
        cout << "\n6. Post order traversal";
        cout << "\n7. Exit";
        
        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            cout << "\nEnter value to insert : ";
            cin >> value;
            bst.insertNode(value);
            break;

            case 2:
            cout << "\nEnter value to delete : ";
            cin >> value;
            bst.deleteNode(value);
            break;

            case 3:
            cout << "\nEnter value to search : ";
            cin >> value;
            bst.searchNode(value);
            break;

            case 4: bst.preOrder(); break;

            case 5: bst.inOrder(); break;

            case 6: bst.postOrder(); break;

            case 7: cout << "\nProgram exited successfully"; return 0;

            default: cout << "\nPlease enter a valid option"; break;
        }
    }
}
