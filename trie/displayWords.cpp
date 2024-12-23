#include "trie.hpp"

void Trie::displayWordsHelper(TrieNode* node, string currentWord)
{
    if (node->isEndOfWord) cout << currentWord << " ";

    for (const auto& pair : node->children) 
    {
        char ch = pair.first;
        TrieNode* childNode = pair.second;

        displayWordsHelper(childNode, currentWord + ch);
    }
}

void Trie::displayWords()
{
    if (!root)
    {
        cout << "\nTrie is empty";
        return;
    }

    cout << "\nWords in the trie are : ";

    displayWordsHelper(root,"");
}