// trie.cpp

#include <bits/stdc++.h>
using namespace std;

class TrieNode {
public:
    TrieNode* child[26];
    bool isEndOfWord;

    TrieNode() {
        isEndOfWord = false;
        for (int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
    }
};

class Trie {
	private:
	    TrieNode* root;

	public:
	    Trie() {
	        root = new TrieNode();
	    }

	    void insert(string word) {
	        TrieNode* node = root;
	        for (char c : word) {
	            int index = c - 'a';
	            if (node->children[index] == nullptr) {
	                node->children[index] = new TrieNode();
	            }
	            node = node->children[index];
	        }
	        node->isEndOfWord = true;
	    }

	    bool search(string word) {
	        TrieNode* node = root;
	        for (char c : word) {
	            int index = c - 'a';
	            if (node->children[index] == nullptr) {
	                return false;
	            }
	            node = node->children[index];
	        }
	        return node != nullptr && node->isEndOfWord;
	    }

	    bool startsWith(string prefix) {
	        TrieNode* node = root;
	        for (char c : prefix) {
	            int index = c - 'a';
	            if (node->children[index] == nullptr) {
	                return false;
	            }
	            node = node->children[index];
	        }
	        return true;
	    }
};

int main() {
    Trie* trie = new Trie();
    trie->insert("apple");
    cout << (trie->search("apple") ? "Found" : "Not Found") << endl; // Output: Found
    cout << (trie->search("app") ? "Found" : "Not Found") << endl;   // Output: Not Found
    cout << (trie->startsWith("app") ? "Yes" : "No") << endl;        // Output: Yes
    trie->insert("app");
    cout << (trie->search("app") ? "Found" : "Not Found") << endl;   // Output: Found
    return 0;
}
