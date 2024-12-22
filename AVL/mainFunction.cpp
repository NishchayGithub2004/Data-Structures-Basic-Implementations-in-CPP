#include "AVL.hpp"
#include "left_and_right_rotate.cpp"
#include "insertNode.cpp"
#include "deleteNode.cpp"
#include "traversal.cpp"

int main()
{
    AVL avl;
    int choice, value;

    while (true)
    {
        cout << "\n\nMAIN MENU\n\n";
        cout << "1. Insert node";
        cout << "\n2. Delete node";
        cout << "\n3. Pre order traversal";
        cout << "\n4. In order traversal";
        cout << "\n5. Post order traversal";
        cout << "\n6. Exit";
        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:

            cout << "\nEnter value to insert : ";
            cin >> value;
            avl.insertNode(value);
            break;

            case 2:

            cout << "\nEnter value to delete : ";
            cin >> value;
            avl.deleteNode(value);
            break;

            case 3: avl.preOrder(); break;

            case 4: avl.inOrder(); break;

            case 5: avl.postOrder(); break;

            case 6: cout << "\nExiting the program"; return 0;

            default: cout << "\nInvalid option entered"; break;
        }
    }
}