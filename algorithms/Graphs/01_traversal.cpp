#include <bits/stdc++.h>

using namespace std;

class Graph
{
    public:
            int V;
            vector<vector<int>>adj;

            Graph(int n)
            {
                V = n;
                adj.resize(n);
            }

            void addEdge(int u, int v)
            {
                adj[u].push_back(v);

                //undirected graph
                adj[v].push_back(u);
            }
};

vector<int>bfs(int start, vector<vector<int>>&adj)
{
    int n = adj.size();
    vector<int>vis(n,0);
    vector<int> ans;

    queue<int>q;

    q.push(start);
    vis[start] =1;

    while(!q.empty())
    {
        int node = q.front();

        q.pop();

        ans.push_back(node);

        for(int neigh: adj[node])
        {
            if(!vis[neigh])
            {
                vis[neigh] =1;
                q.push(neigh);
            }
        }
    }

    return ans;
}

void dfshelper(int node, vector<vector<int>>&adj, vector<int>&vis, vector<int>&ans)
{
    vis[node] =1;

    ans.push_back(node);

    for(int neigh: adj[node])
    {
        if(!vis[neigh]) dfshelper(neigh,adj, vis, ans);
    }
}

vector<int>dfs(int start, vector<vector<int>>&adj)
{
    int n = adj.size();

    vector<int>vis(n,0);
    vector<int>ans;

    dfshelper(start, adj, vis, ans);

    return ans;
}

vector<int> dfsIterative(int start, vector<vector<int>>& adj) {

    int n = adj.size();

    vector<int> vis(n, 0);
    vector<int> ans;

    stack<int> st;

    st.push(start);

    while (!st.empty()) {

        int node = st.top();
        st.pop();

        if (vis[node])
            continue;

        vis[node] = 1;
        ans.push_back(node);

        for (auto it = adj[node].rbegin();
             it != adj[node].rend();
             ++it) {

            if (!vis[*it])
                st.push(*it);
        }
    }

    return ans;
}

int main() {

    int V, E;
    cin >> V >> E;

    vector<vector<int>> adj(V);

    for (int i = 0; i < E; i++) {

        int u, v;
        cin >> u >> v;

        // Undirected Graph
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> bfsAns = bfs(0, adj);
    vector<int> dfsAns = dfs(0, adj);

    cout << "BFS Traversal: ";
    for (int node : bfsAns) {
        cout << node << " ";
    }
    cout << "\n";

    cout << "DFS Traversal: ";
    for (int node : dfsAns) {
        cout << node << " ";
    }
    cout << "\n";

    return 0;
}