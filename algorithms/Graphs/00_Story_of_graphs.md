# Story Of Graphs

## Layer 0: Is this even reachable?

    - Algorithms: 1. DFS    2. BFS

    - Which files are reachable?

    - Which entities are reachable?

## Layer 1: Is this structure sane?

    - Algorithms: Cycle detection [DSU]

    - Some questions are illegal if cycles exists, E.g.--> 1. Scheduling    2. Ordering

    - Deadlock in OS
    - Circular Dependencies in packages
    - Course prerequites in a loop
    - Infinite recursion in call graph

## Layer 2: Casuality & Order [In what order must things happnen?]
    
    - Algorithm: Topological Sort
                                    i. DFS based
                                    ii. BFS based Kahn's algorithm
    
    - Course scheduling
    - Task pipelines
    - Compiler passes
    - OS boot sequence

## Layer 3: Movement with cose [Cheapest way to go]

    - Algorithms: 1. Djikstra [greedy propogation]      2. Bell-man Ford[brute correctness]

    - Google maps
    - Packet routing
    - AI search spaces

## Layer 4: Global Design [Cheapest structure to keep things connected]

    - Algorithm: 1. Prim    2. Kruskal

    - Network Design
    - Wiring
    - Layout planning
    - Campus network design

## Layer 5: Structure Introspection [What this graph made up of internally?]

    - Algorithm: 1. Kosaraju    2. Tarjan

    - Social communities
    - Mutually dependent services
    - Modules in Large codebases

---

*Graph algorithms are not tricks- they are successive lenses for asking better questions about connected reality*