# Heaps
---

## Heap Day 1: Min heap

1. A heap is just an array with a special relationship

2. E.g----> Parent: 2---> Child: 4,5
            Parent: 4----> Child: 8 10
            parent: 5----> Child: 10 7

3. Stored as vector<int> heap=={2,4,5,8,10,7};

4. **Index Relationship** 
                        - For any node at index i:
                        
                        - parent= (i-1)/2
                        - left= 2*i+1
                        - right= 2*i+2

                        E.g. ----> Index: 0 1 2 3 4 5
                                    Value: 2 4 5 8 10 7
                                    For Index 1: Parent: 0--->2
                                                Left: 3---> 8
                                                Right: 4--->10

5. **Heapify up**: Inser at the end, then bubble upward until the parent is smaller. 