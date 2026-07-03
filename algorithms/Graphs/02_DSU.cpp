#include <bits/stdc++.h>

using namespace std;

class DSU
{
    private:
            vector<int>parent;
            vector<int>size;

public:
        DSU(int n)
        {
            parent.resize(n);
            size.resize(n,1);

            for(int i=0;i<n;i++)
            {
                parent[i]=i;
            }
        }

        int find(int node)
        {
            if(parent[node]== node)
            {
                return node; //we got it
            }

            return parent[node] = find(parent[node]);
        }

        void unionBySize(int u, int v)
        {
            int pu= find(u);
            int pv = find(v);

            if(pu==pv) return;

            if(size[pu]<size[pv]) swap(pu,pv); //attaches the smaller tree below the larger one

            parent[pv] = pu;
            size[pu]+= size[pv];
        }
};


int main()
{
    DSU dsu(7);

    dsu.unionBySize(1,2);
    dsu.unionBySize(2,3);
    dsu.unionBySize(4,5);

    if(dsu.find(1) == dsu.find(3))
        cout<<"Same Component\n";
    else
        cout<<"Different Component\n";

    if(dsu.find(1) == dsu.find(5))
        cout<<"Same Component\n";
    else
        cout<<"Different Component\n";

    dsu.unionBySize(3,5);

    if(dsu.find(1) == dsu.find(5))
        cout<<"Same Component\n";
    else
        cout<<"Different Component\n";

    return 0;
}