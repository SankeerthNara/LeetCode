// Last updated: 9/12/2026, 5:14:23 PM
1class LRUCache {
2public:
3    int cap;
4
5    list<int> order;
6    unordered_map<int, pair<int, list<int>::iterator>> mp;
7
8    LRUCache(int capacity) {
9        cap = capacity;
10    }
11
12    int get(int key) {
13        if (!mp.count(key))
14            return -1;
15
16        // Move key to the front (most recently used)
17        order.erase(mp[key].second);
18        order.push_front(key);
19        mp[key].second = order.begin();
20
21        return mp[key].first;
22    }
23
24    void put(int key, int value) {
25        // Key already exists
26        if (mp.count(key)) {
27            order.erase(mp[key].second);
28            order.push_front(key);
29
30            mp[key] = {value, order.begin()};
31            return;
32        }
33
34        // Cache is full
35        if (mp.size() == cap) {
36            int oldkey = order.back();
37
38            order.pop_back();
39            mp.erase(oldkey);
40        }
41
42        // Insert new key
43        order.push_front(key);
44        mp[key] = {value, order.begin()};
45    }
46};