// Last updated: 7/19/2026, 7:58:58 PM
1class TrieNode {
2public:
3    TrieNode* child[26];
4    bool end;
5
6    TrieNode() {
7        end = false;
8        for (int i = 0; i < 26; i++)
9            child[i] = nullptr;
10    }
11};
12
13class WordDictionary {
14public:
15    TrieNode* root;
16
17    WordDictionary() {
18        root = new TrieNode();
19    }
20
21    void addWord(string word) {
22        TrieNode* curr = root;
23
24        for (char c : word) {
25            int idx = c - 'a';
26
27            if (curr->child[idx] == nullptr)
28                curr->child[idx] = new TrieNode();
29
30            curr = curr->child[idx];
31        }
32
33        curr->end = true;
34    }
35
36    bool dfs(string &word, int pos, TrieNode* node) {
37
38        if (pos == word.size())
39            return node->end;
40
41        char c = word[pos];
42
43        if (c == '.') {
44
45            for (int i = 0; i < 26; i++) {
46
47                if (node->child[i] &&
48                    dfs(word, pos + 1, node->child[i]))
49                    return true;
50            }
51
52            return false;
53        }
54
55        int idx = c - 'a';
56
57        if (node->child[idx] == nullptr)
58            return false;
59
60        return dfs(word, pos + 1, node->child[idx]);
61    }
62
63    bool search(string word) {
64        return dfs(word, 0, root);
65    }
66};