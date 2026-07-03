#include <bits/stdc++.h>

using namespace std;

bool hascycle(int V, vector<vector<int>>&adj)
{
    vector<int>indegree(V,0);


    // 1. Identifying the numbers of indegree
    for(int u=0; u<V; u++)
    {
        for(int v:adj[u]) indegree[v]++; 
    }

    queue<int> q;

    for(int i=0; i<V;i++) 
    {
        if(indegree[i]==0) q.push(i);
    }

    int count =0;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        count++;

        for(int neigh: adj[node])
        {
            indegree[neigh]--;

            if(indegree[neigh]==0)
            {
                q.push(neigh);
            }
        }
    }

    return count!=V;
}

vector<int> kahnTopoSort(int V, vector<vector<int>>&adj)
{
    vector<int>indegree(V,0);

    for(int u=0; u<V; u++)
    {
        for(int v: adj[u]) indegree[v]++;
    }

    queue<int>q;

    //inserting 0 degree nodes. i.e. 0 dependency node

    for(int i=0; i<V;i++)
    {
        if(indegree[i]==0) q.push(i);

    }

    vector<int>topo;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        topo.push_back(node);

        for(int neigh: adj[node])
        {
            indegree[neigh]--;

            if(indegree[neigh]==0) q.push(neigh);
        }
    }

return topo;
}

int main()
{
    int V = 6;

    vector<vector<int>> adj(V);

    adj[5].push_back(2);
    adj[5].push_back(0);

    adj[4].push_back(0);
    adj[4].push_back(1);

    adj[2].push_back(3);

    adj[3].push_back(1);

    vector<int> topo = kahnTopoSort(V, adj);

    cout<<"Topological Order:\n";

    for(int node:topo) cout<<node<<" ";

    cout<<endl;
    
    cout<< hascycle(V,adj);
    
    return 0;
}