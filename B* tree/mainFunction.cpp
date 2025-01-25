#include "B_star.hpp"
#include "borrowFromNext.cpp"
#include "borrowFromPrev.cpp"
#include "deleteValue.cpp"
#include "fill.cpp"
#include "insertNode.cpp"
#include "merge.cpp"
#include "predecessor_and_successor.cpp"
#include "removeFromNode.cpp"
#include "removeFromNonLeaf.cpp"
#include "search.cpp"
#include "splitChild.cpp"
#include "traverse.cpp"

int main()
{
    BSTree t(3);

    int option, value;

    while (true)
    {
        std::cout << "\n\nMAIN MENU\n";
        std::cout << "\n1. Insert node";
        std::cout << "\n2. Delete node";
        std::cout << "\n3. Search node";
        std::cout << "\n4. Traverse tree";
        std::cout << "\n5. Exit";

        std::cout << "\n\nEnter your choice : ";
        std::cin >> option;

        switch(option)
        {
            case 1:

            std::cout << "\nEnter value to insert : ";
            std::cin >> value;
            t.insertValue(value);
            break;

            case 2:

            std::cout << "\nEnter value to delete : ";
            std::cin >> value;
            t.deleteValue(value);
            break;

            case 3:

            std::cout << "\nEnter value to search : ";
            std::cin >> value;
            t.searchValue(value);
            break;

            case 4: t.traverse(); break;

            case 5: std::cout << "\nProgram exited successfully"; return 0;

            default: std::cout << "\nPlease enter a valid option"; break;
        }
    }
}