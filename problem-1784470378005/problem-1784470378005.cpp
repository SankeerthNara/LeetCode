// Last updated: 7/19/2026, 7:42:58 PM
1class Trie {
2public:
3unordered_set<string> mp;
4unordered_set<string> pr;
5    Trie() {
6        
7    }
8    
9    void insert(string word) {
10        mp.insert(word);
11        int i = 1;
12        while(i <= word.size())
13        {
14            pr.insert(word.substr(0,i));
15            i++;
16        }
17    }
18    
19    bool search(string word) {
20        if(mp.count(word)) return true;
21        else return false;
22    }
23    
24    bool startsWith(string prefix) {
25        if(pr.count(prefix)) return true;
26        else return false;
27    }
28};
29
30/**
31 * Your Trie object will be instantiated and called as such:
32 * Trie* obj = new Trie();
33 * obj->insert(word);
34 * bool param_2 = obj->search(word);
35 * bool param_3 = obj->startsWith(prefix);
36 */