// https://practice.geeksforgeeks.org/problems/number-of-provinces/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number-of-provinces

class Solution
{
public:
    int vis[500] = {0};

    void bfs(vector<vector<int>> adj, int v, int N)
    {
        queue<int> q;
        vis[N] = 1;
        q.push(N);

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            for (int i = 0; i < v; i++)
            {
                if (adj[node][i] && !vis[i])
                {
                    q.push(i);
                    vis[i] = 1;
                }
            }
        }
    }

public:
    int numProvinces(vector<vector<int>> adj, int V)
    {
        // code here
        int ans = 0;
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                bfs(adj, V, i);
                ans++;
            }
        }
        return ans;
    }
};
