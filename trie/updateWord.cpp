#include "trie.hpp"

bool Trie::updateWordHelper(string oldWord, string newWord)
{
    bool oldWordDeleted = deleteWordHelper(oldWord);
    
    if (!oldWordDeleted) return false;
    
    bool newWordInserted = insertWordHelper(newWord);
    
    return newWordInserted;
}

void Trie::updateWord(string oldWord, string newWord)
{
    if (updateWordHelper(oldWord,newWord)) cout << "\n" << oldWord << " updated to " << newWord << " successfully";

    else cout << "\nUpdate failed! Either " << oldWord << " does not exist or " << newWord << " already exists or both";
}