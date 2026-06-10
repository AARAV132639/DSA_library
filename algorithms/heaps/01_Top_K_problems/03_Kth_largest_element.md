# Problem : Kth Largest Element

## Scenario

1. Give: nums = {3,2,1,5,6,4} k= 2. Answer will be 5. 5 will be the 2nd largest after sorting this array

2. Approach 1: brute force: sort(nums.begin(), nums.end()). Returns nums[n-k]. Complexity: O(n log n)

3. So why learn heaps?

## Heap insight

1. Suppose n = 1000000 k =5. 

- Do we actually need rest of the elements? Ans is NO!

- We greedy people only care about top 5 people rest are irrelevant

- This gave birth to *Top K element*

## Story

- Imagine a VIP room with only K seats. For K=3 Room size = [?,?,?].

- Only the largest 3 people are allowed. Rest are kicked out

- So which heap? ----> *Min Heap* not max heap

- Why *Min heap*?----> because the smallest element will sit at root. Thus when new element arrives it will be directly compared to root.

## Algorithm

o Step 1: Insert into heap          pq.push(num);

o Step 2: If heap size exceeds K    pq.pop(); ---> Remove the smallest

o At all times: Heaps contains top K largest elements

## Time complexity

o Each insertion: O(log k) because heap size is never greater than K

o Hence total: O(n log k)

o O(k) space complexity.

## Patterns to remember

- Kth largest
- Kth smallest

- Top K
- Best K

- Largest K
- Smallest K

- - Think: Maintain a heap of size K

*Most important heap pattern in interview*

## Learning summary

- Use a fixed-size heap to keep only K most important candidates

- This same idea directly leads to 
                                    o Top K Frequent Element
                                    o K closest points to origin
                                    o K closest numbers
                                    o K largest sum combinations
                                    o Kth largest in stream