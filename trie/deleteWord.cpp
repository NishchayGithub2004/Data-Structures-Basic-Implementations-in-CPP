#include "trie.hpp"

bool Trie::deleteWordHelper(string word)
{
    TrieNode* current = root;
    vector<TrieNode*> path;

    for (char ch : word) 
    {
        if (current->children.find(ch) == current->children.end()) return false;
        path.push_back(current);
        current = current->children[ch];
    }

    if (!current->isEndOfWord) return false;

    current->isEndOfWord = false;

    for (int i = word.length() - 1; i >= 0; i--)
    {
        TrieNode* parent = path[i];
        char ch = word[i];

        if (current->children.empty() && !current->isEndOfWord) 
        {
            delete current;
            parent->children.erase(ch);
        } 
        
        else break;

        current = parent;
    }

    return true;
}

void Trie::deleteWord(string word)
{
    if (deleteWordHelper(word)) cout << "\n" << word << " deleted successfully";

    else cout << "\n" << word << " not found in the trie";
}