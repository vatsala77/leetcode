class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {

        vector<pair<int, int>> adj[n];

        for (auto it : roads) {
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }

        priority_queue<
            pair<long long, int>,
            vector<pair<long long, int>>,
            greater<pair<long long, int>>
        > pq;

        pq.push({0, 0});

        vector<long long> dis(n, LLONG_MAX);
        vector<int> ways(n, 0);

        dis[0] = 0;
        ways[0] = 1;

        int mod = 1e9 + 7;

        while (!pq.empty()) {

            auto [dist, node] = pq.top();
            pq.pop();

            if (dist > dis[node])
                continue;

            for (auto nbr : adj[node]) {

                int nextnode = nbr.first;
                int newd = nbr.second;

                long long newDist = dist + newd;

                if (newDist < dis[nextnode]) {

                    dis[nextnode] = newDist;
                    ways[nextnode] = ways[node];

                    pq.push({newDist, nextnode});
                }

                else if (newDist == dis[nextnode]) {

                    ways[nextnode] =
                        (ways[nextnode] + ways[node]) % mod;
                }
            }
        }

        return ways[n - 1];
    }
};