# DSU

*Do these two nodes belong to the same connected componenet?*

## Story

- Imagine every node starts as it own kingdom. [1,2,3,4,5,]

- Each node is its own leader. union(1,2) [1-2,3,4,5]. union(2,3) [1-2-3,4,5]

- Now find(2) and find(3) will return same leader.

- 1,3 belong to same component. That's the essence of DSU

## Operations

1. Find: returns component representative

2. Union: merges two components

## Optimizations

1. Path compression: whenever we find leader, make everyone directly point to leader. *parent[x] = find(parent[x])*

2. Union by size: Always attach smaller tree under bigger tree.

## Where does it appear?

1. Connected components

2. Cycle detection in Undirected graph. *if find(u) == find(v)* happends before union, cycle exists

3. Kruskal's MST.
                    - Sort edges
                    - Take edge if it doesn't form cycle
                    - DSU checks cycle almost in O(1)


