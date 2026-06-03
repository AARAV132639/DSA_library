# include <bits/stdc++.h>

using namespace std;

class MinHeap{
    
    private: vector<int>heap;

    public:

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

    //Insert
    void insert (int value)
    {
        heap.push_back(value);
        heapifyUp(heap.size()-1);
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

    h.display();

}