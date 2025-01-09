#include<bits/stdc++.h>
using namespace std;

class Trie {
public:
    struct Node {
        Node* children[26];
        bool eow;

        Node() {
            for (int i = 0; i < 26; i++) { 
                children[i] = nullptr; 
            }
            eow = false;
        } 
    };

    Node* root;

    Trie() {
        root = new Node();
    }

    void insert(string word) { 
        Node* curr = root;
        for (char c : word) {
            int idx = c - 'a';
            if (curr->children[idx] == nullptr) {
                curr->children[idx] = new Node();
            }
            curr = curr->children[idx];
        }
        curr->eow = true;
    }

    bool search(string key) {  
        Node* curr = root;     
        for (char c : key) {
            int idx = c - 'a';
            if (curr->children[idx] == nullptr) {
                return false;
            }
            curr = curr->children[idx];
        }
        return curr->eow;
    }

    bool startsWith(string prefix) { 
        Node* curr = root;
        for (char c : prefix) {
            int idx = c - 'a';
            if (curr->children[idx] == nullptr) {
                return false;
            }
            curr = curr->children[idx];
        }
        return true;
    }

    string findLongestWord() {
        string longestWord = "";
        string currentWord = "";
        dfs(root, currentWord, longestWord);
        return longestWord;
    }

private:
    void dfs(Node* node, string& currentWord, string& longestWord) {
        if (!node) return;

        if (node->eow) {
            if (currentWord.length() > longestWord.length() || 
                (currentWord.length() == longestWord.length() && currentWord < longestWord)) {
                longestWord = currentWord;
            }
        }

        for (int i = 0; i < 26; i++) {
            if (node->children[i]) {
                currentWord.push_back('a' + i);
                dfs(node->children[i], currentWord, longestWord);
                currentWord.pop_back();
            }
        }
    }
};

class SuffixTrie {
    Trie reversedTrie;

public:
    void insert(string word) {
        reverse(word.begin(), word.end());
        reversedTrie.insert(word);
    }

    bool hasSuffix(string suffix) {
        reverse(suffix.begin(), suffix.end());
        return reversedTrie.search(suffix);
    }
};

int main() {
    Trie trie;
    SuffixTrie suffixTrie;
    string words[] = {"the", "a", "there", "their", "any", "thee"};
    
    for (string word : words) {
        trie.insert(word);
        suffixTrie.insert(word);
        cout << "Inserted " << word << endl;
    }

    cout << "thee -> " << (trie.search("thee") ? "true" : "false") << endl;
    cout << "thor -> " << (trie.search("thor") ? "true" : "false") << endl;

    cout << "Prefix 'the' -> " << (trie.startsWith("the") ? "true" : "false") << endl;
    cout << "Prefix 'thi' -> " << (trie.startsWith("thi") ? "true" : "false") << endl;

    cout << "Suffix 'hee' -> " << (suffixTrie.hasSuffix("hee") ? "true" : "false") << endl;
    cout << "Suffix 'hor' -> " << (suffixTrie.hasSuffix("hor") ? "true" : "false") << endl;

    cout << "Longest word in the Trie: " << trie.findLongestWord() << endl;

    return 0;
}