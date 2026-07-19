// Last updated: 7/19/2026, 7:36:17 PM
1class Solution {
2public:
3    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
4        vector<vector<int>> adj(numCourses);
5        vector<int> indegree(numCourses, 0);
6
7        for (auto &p : prerequisites) {
8            adj[p[1]].push_back(p[0]);
9            indegree[p[0]]++;
10        }
11
12        queue<int> q;
13        for (int i = 0; i < numCourses; i++) {
14            if (indegree[i] == 0)
15                q.push(i);
16        }
17
18        int count = 0;
19
20        while (!q.empty()) {
21            int node = q.front();
22            q.pop();
23            count++;
24
25            for (int nei : adj[node]) {
26                indegree[nei]--;
27                if (indegree[nei] == 0)
28                    q.push(nei);
29            }
30        }
31
32        return count == numCourses;
33    }
34};
35