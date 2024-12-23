#include "trie.hpp"

bool Trie::insertWordHelper(string word)
{
    TrieNode* current = root;

    for (char ch : word)
    {
        if (current->children.find(ch) == current->children.end()) current->children[ch] = new TrieNode();

        current = current->children[ch];
    }

    if (current->isEndOfWord) return false;

    current->isEndOfWord = true;

    return true;
}

void Trie::insertWord(string word)
{
    if (insertWordHelper(word)) cout << "\n" << word << " inserted successfully";

    else cout << "\n" << word << " already exists in the trie";
}