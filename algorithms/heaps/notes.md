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

6. **Heapify down**: Compare with smaller child. Swap if needed. Continue

---

## Heap Day 2: top(), extractMin(), heapifyDown() on Min heap

1. Suppose the array is : 2 5 20 10 and King asks "Give me the smallest element". Heap should return 2.

    - Thus it gives 2 and remove it. This is *extractMin()*

    i. Step 1: top(). Simplest Operation. 
        - int top(){
            return heap[0];
        }

        - Minimum is always at the root. Time: O(1);

    ii. Step 2: How Extract Works

        - Current heap: 2 5 20 10. Remove root
        - we cannot leave a hold.
        - Move last element to root: 10 5 20
        - Now heap property is broken. Parent>Child
        - Need to push 10 downward.
        - This is *heapify down*

    iii. Step 3: Heapify Down

        - Rule:     1. Compare with smaller child
                    2. Swap if needed
                    3. Continue

### Final take away

1. Insert: heapify up mechanism
2. Extract Min: heapify down mechanism

- Every heap problem in Top-k, Streaking, Merge-K, Scheduling, Meeting rooms is ultimately built on these two operations