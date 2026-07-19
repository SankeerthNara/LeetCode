// Last updated: 7/19/2026, 7:52:12 PM
1class Solution {
2public:
3    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
4
5        vector<vector<int>> adj(numCourses);
6        vector<int> indegree(numCourses, 0);
7
8        for (auto &p : prerequisites) {
9            adj[p[1]].push_back(p[0]);
10            indegree[p[0]]++;
11        }
12
13        queue<int> q;
14
15        for (int i = 0; i < numCourses; i++) {
16            if (indegree[i] == 0)
17                q.push(i);
18        }
19
20        vector<int> ans;
21
22        while (!q.empty()) {
23            int node = q.front();
24            q.pop();
25
26            ans.push_back(node);
27
28            for (int nei : adj[node]) {
29                indegree[nei]--;
30
31                if (indegree[nei] == 0)
32                    q.push(nei);
33            }
34        }
35
36        if (ans.size() != numCourses)
37            return {};
38
39        return ans;
40    }
41};