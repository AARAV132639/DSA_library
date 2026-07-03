#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

class Graph
{
    private: 
            int V;
            vector<vector<pair<int,int>>>adj;
    

    public:
            Graph(int vertices)
            {
                V = vertices;
                adj.resize(V);
            }

            void addEdge(int u, int v, int weight)
            {
                adj[u].push_back({v,weight});
                adj[v].push_back({u,weight}); //remove this line for directed graphs
            }

            vector<int>djikstra(int src)
            {
                vector<int>dist(V, INT_MAX);

                priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;

                dist[src] =0;
                pq.push({0,src});

                while(!pq.empty())
                {
                    int currentDist = pq.top().first;
                    int node = pq.top().second;
                    pq.pop();

                    //Ignore outdated entries
                    if(currentDist>dist[node]) continue;

                    for(auto edge: adj[node])
                    {
                        int neighbour = edge.first;
                        int weight = edge.second;

                        if(dist[node]+weight< dist[neighbour]) 
                        {
                            dist[neighbour] = edge.first;
                           dist[neighbour] = dist[node] + weight;

                           pq.push({dist[neighbour], neighbour});
                        }  
                    }
                }

                return dist;
            }
};

int main() {

    Graph g(5);

    g.addEdge(0, 1, 2);
    g.addEdge(0, 2, 4);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 3, 7);
    g.addEdge(2, 4, 3);
    g.addEdge(3, 4, 1);

    vector<int> distance = g.djikstra(0);

    cout << "Shortest distances from source:\n";

    for (int i = 0; i < distance.size(); i++)
        cout << "0 -> " << i << " = " << distance[i] << endl;

    return 0;
}