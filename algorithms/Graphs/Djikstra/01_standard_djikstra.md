# Djikstra Insights

## Problem
Given a weighted graph with *non-negative* edge weights and a source vertex src, find the shortest distance from src to every other vertex

## Algorithm

1. Initialize every distance as infinity

2. set dist[src] = 0;

3. Push (0,src) into  a min-priority queue

4. While the queue is not empty:

                                o Pop the node with smallest distance

                                o If this entry is outdated, skip it.

                                o Relax all adjacent edges

                                o If a shorter path is found, update the distance and push it into the queue

5. Continue until the queue becomes empty.

## Time & Space Complexity

1. TC : O((V+E)log V)

2. SC : O(V+E)