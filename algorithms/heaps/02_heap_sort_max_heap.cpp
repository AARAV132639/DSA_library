// Heap sort using max heap

/*

1. Key idea: Use max heap. Because largest element belongs at the end. Thus in-place sort
*/

#include <iostream>
# include <vector>

using namespace std;


void heapify(vector<int>&arr, int n, int i)
{
    int largest =i;

    int left = 2*i +1;

    int right = 2*i +2;

    if(left<n && arr[left] > arr[largest]) largest = left;

    if(right<n && arr[right] > arr[largest]) largest = right;

    if(largest !=i)
    {
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}

void heapsort(vector<int>&arr)
{
    int n= arr.size();

    //build max heap

    for(int i= n/2 -1; i>=0;i--) heapify(arr, n , i);

    //extract largest
    for(int i= n-1; i>0; i--)
    {
        swap(arr[0], arr[i]);

        heapify(arr, i, 0);
    }
}

int main()
{
    vector<int>arr = {10,5,12,48,22};

    heapsort(arr);

    for(int x:arr) cout<<x<<" ";
}