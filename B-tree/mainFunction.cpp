#include "b.hpp"
#include "constructor.cpp"
#include "borrowFromPrev.cpp"
#include "borrowFromNext.cpp"
#include "deleteKey.cpp"
#include "deleteValue.cpp"
#include "fill.cpp"
#include "getPredecessor.cpp"
#include "getSuccessor.cpp"
#include "insertNonFull.cpp"
#include "insertValue.cpp"
#include "merge.cpp"
#include "removeFromLeaf.cpp"
#include "removeFromNonLeaf.cpp"
#include "searchKey.cpp"
#include "searchValue.cpp"
#include "splitChild.cpp"
#include "traverse.cpp"

int main() 
{
    BTree t(3);

    int option, value;

    while (true)
    {
        std::cout << "\n\nMAIN MENU\n";
        std::cout << "\n1. Insert value";
        std::cout << "\n2. Delete value";
        std::cout << "\n3. Search value";
        std::cout << "\n4. Traverse";
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

            case 5: "\nProgram exited successfully"; return 0;

            default: std::cout << "\nEnter a valid option"; break;
        }
    }
}