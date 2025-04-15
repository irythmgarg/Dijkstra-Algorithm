// Problem: Single Source Shortest Path using Dijkstra's Algorithm
// Platform: Custom / Compatible with Leetcode-style input
// Author: [Ridham Garg or irythmgarg] 🚀

class Solution {
public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        
        // Step 1: Create adjacency list with weights
        unordered_map<int, vector<pair<int, int>>> mp;
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0], v = edges[i][1], w = edges[i][2];
            mp[u].push_back({v, w});
            mp[v].push_back({u, w}); // since the graph is undirected
        }
        
        // Step 2: Min-heap for Dijkstra (cost, node)
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        q.push({0, src});
        
        // Step 3: Distance vector initialized to INF
        vector<int> ans(V, INT_MAX);
        ans[src] = 0;

        // Step 4: Dijkstra's core loop
        while (!q.empty()) {
            pair<int, int> top = q.top();
            q.pop();
            int cost = top.first;
            int node = top.second;

            // Explore neighbors
            for (auto neigh : mp[node]) {
                int neighNode = neigh.first;
                int edgeWeight = neigh.second;

                // Relaxation step
                if (ans[neighNode] > cost + edgeWeight) {
                    ans[neighNode] = cost + edgeWeight;
                    q.push({ans[neighNode], neighNode});
                }
            }
        }

        return ans;
    }
};
