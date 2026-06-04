# include <bits/stdc++.h>

using namespace std;

class MinHeap{
    
 private: vector<int>heap;
    // Inserting operations;
    /*
    - Put element at end
    - Move upward until heap property is restored. This upward movement is called Heapify up
    */

    // Heapify up
    void heapifyUp(int index)
    {
        while(index>0)
        {
            int parent= (index-1)/2;

            if(heap[parent]<= heap[index]) break;

            swap(heap[parent], heap[index]);

            index= parent;
        }
    }

    //Heapify down
    void heapifyDown(int index)
    {
        int n = heap.size();

        while(true)
        {
            int left= 2*index+1;
            int right= 2*index+2; 

            int smallest= index;

            if(left<n&&heap[left]<heap[smallest]) smallest= left;

            if(right<n && heap[right]<heap[smallest]) smallest= right;

            if(smallest==index) break;

            swap(heap[index], heap[smallest]);
            index= smallest;
        }
    }

    
 public:
    void insert(int value)
    {
        heap.push_back(value);
        heapifyUp(heap.size()-1);

    }

    int top()
    {
        return heap[0];
    }

    int extractMin()
    {
        int minValue= heap[0];

        heap[0]= heap.back();

        heap.pop_back();

        if(!heap.empty()) heapifyDown(0);

        return minValue;
    }

    //display function
    void display()
    {
        for (int num: heap) cout<<num<<" ";
        cout<< endl;
    }
};

int main()
{
    MinHeap h;

    h.insert(10);
    h.insert(5);
    h.insert(20);
    h.insert(2);

    cout<<h.top()<<endl;
    cout<<h.extractMin()<<endl;

    h.display();

}