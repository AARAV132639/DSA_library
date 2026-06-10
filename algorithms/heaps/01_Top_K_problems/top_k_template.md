## Top k template

priority_queue<KEY> heap;

for (each item)
{
    compute key;

    heap.push(item);

    if(heap.size()>k) heap.pop();
}