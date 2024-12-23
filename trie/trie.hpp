#ifndef TRIE_HPP
#define TRIE_HPP

#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;

class TrieNode
{
    public:

    unordered_map<char, TrieNode*> children;
    bool isEndOfWord = false;

    TrieNode() : isEndOfWord(false) {}
};

class Trie
{
    private: TrieNode* root;

    bool insertWordHelper(string word);

    bool deleteWordHelper(string word);

    bool searchWordHelper(string word);

    bool updateWordHelper(string oldWord, string newWord);

    void displayWordsHelper(TrieNode* node, string currentWord);

    public: Trie() {root = new TrieNode();}

    void insertWord(string word);

    void deleteWord(string word);

    void searchWord(string word);

    void updateWord(string oldWord, string newWord);

    void displayWords();
};

#endif