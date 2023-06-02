// https://practice.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-adjacency-list

class Solution
{
public:
    vector<vector<int>> printGraph(int v, vector<int> adj[])
    {
        vector<vector<int>> a;
        for (int i = 0; i < v; i++)
        {
            a.push_back(vector<int>{i});
            for (auto &it : adj[i])
                a[i].push_back(it);
        }

        return a;
    }
};
