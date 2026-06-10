# Problem: Top K Frequent Elements

- Given: nums = [1,1,1,2,2,2,2,3] k= 2 || Ans = [2,1]

## Algorithm:

1. Step 1: Count Frequency

- Use a hashmap. [un_ordered_maps<int,int>freq];

- Loop it.  for(int num:nums) freq[num]++

- Result: 
        {
            1:3
            2:4
            3:1
        }

2. Step 2: What goes into heap?

- In Kth largest we did: heap.push(num); Now it doesn't help

- We care about frequency now

- So we store: {frequency, element}

- E.g: {3,1}, {2,4}, {1,3}

**Why frequency first?** - Because heap compares first element of pair by default. pair<int,int>

- Now same Top-k pattern: Keep only K candidates.

- Use : priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>minHeap;

- This means: Root = lowest frequency among current VIPs

## Story

- VIP room has K seats. 
- We are greedy and comparision based society.
- We will kick out the weakest VIP

- Exactly the same idea s Kth largest. Only the comparision key changed.

## Complexity:

- Frequency count: O(n)

- Heap operations: O(m log k) where m are the number of unique elements

- Total: O(n+m log k)

## Hidden lesson

- Kth larges taught: Heap key = value

- Top k frequent teaches: heap key = derived metric

- The heap doesnt care what you are storing

- It only cares : "What should I compare?"

---
---