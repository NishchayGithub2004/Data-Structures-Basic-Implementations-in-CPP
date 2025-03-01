#include "trie.hpp"
#include "insertWord.cpp"
#include "deleteWord.cpp"
#include "searchWord.cpp"
#include "displayWords.cpp"

int main()
{
    Trie trie;
    int choice;
    string word;

    while (true)
    {
        cout << "\n\nMAIN MENU\n";
        cout << "\n1. Insert word";
        cout << "\n2. Delete word";
        cout << "\n3. Search word";
        cout << "\n4. Display words";
        cout << "\n5. Exit";
        
        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            cout << "\nEnter word to insert : ";
            cin >> word;
            trie.insertWord(word);
            break;

            case 2:
            cout << "\nEnter word to delete : ";
            cin >> word;
            trie.deleteWord(word);
            break;
            
            case 3:
            cout << "\nEnter word to search : ";
            cin >> word;
            trie.searchWord(word);
            break;

            case 4: trie.displayWords(); break;

            case 5: cout << "\nProgram exited successfully"; return 0;

            default: cout << "\nPlease enter a valid option"; break;
        }
    }
}
