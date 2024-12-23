#include "trie.hpp"
#include "insertWord.cpp"
#include "deleteWord.cpp"
#include "searchWord.cpp"
#include "updateWord.cpp"
#include "displayWords.cpp"

int main()
{
    Trie trie;
    int choice;
    string word, oldWord, newWord;

    while (true)
    {
        cout << "\n\nMAIN MENU\n";
        cout << "\n1. Insert word";
        cout << "\n2. Delete word";
        cout << "\n3. Search word";
        cout << "\n4. Update word";
        cout << "\n5. Display words";
        cout << "\n6. Exit";
        
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

            case 4:
            cout << "\nEnter word to replace : ";
            cin >> oldWord;
            cout << "\nEnter replacing word : ";
            cin >> newWord;
            trie.updateWord(oldWord,newWord);
            break;

            case 5: trie.displayWords(); break;

            case 6: cout << "\nProgram exited successfully"; return 0;

            default: cout << "\nPlease enter a valid option"; break;
        }
    }
}