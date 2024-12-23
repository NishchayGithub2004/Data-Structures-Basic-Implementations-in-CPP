#include "trie.hpp"

bool Trie::searchWordHelper(string word)
{
    TrieNode* current = root;

    for (char ch : word)
    {
        if (current->children.find(ch) == current->children.end()) return false;

        current = current->children[ch];
    }

    return current->isEndOfWord;
}

void Trie::searchWord(string word)
{
    if (searchWordHelper(word)) cout << "\n" << word << " found in the trie";

    else cout << "\n" << word << " not found in the trie";
}