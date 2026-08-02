// Last updated: 8/2/2026, 5:21:42 PM
1class PeekingIterator : public Iterator {
2private:
3    int nextVal;
4    bool has_next;
5
6public:
7    PeekingIterator(const vector<int>& nums) : Iterator(nums) {
8        has_next = Iterator::hasNext();
9        if (has_next)
10            nextVal = Iterator::next();
11    }
12
13    int peek() {
14        return nextVal;
15    }
16
17    int next() {
18        int val = nextVal;
19        has_next = Iterator::hasNext();
20        if (has_next)
21            nextVal = Iterator::next();
22        return val;
23    }
24
25    bool hasNext() const {
26        return has_next;
27    }
28};