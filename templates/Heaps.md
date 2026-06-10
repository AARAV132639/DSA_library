## Top k template

priority_queue<KEY> heap;

for (each item)
{
    compute key;

    heap.push(item);

    if(heap.size()>k) heap.pop();
}

- The only question is : What is the key?

o Largest element --> value
o Most frequent --> frequency
o Closest points --> profit
o Highest Profit --> profit
o Smallest range --> range

---
---