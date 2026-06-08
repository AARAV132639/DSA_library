#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int findKthLargest(vector<int>&nums, int k)
{
    priority_queue<int, vector<int>, greater<int>>minHeap;

    for(int num:nums)
    {
        minHeap.push(num);

        if(minHeap.size()>k) minHeap.pop();
    }

    return minHeap.top();
}

int main()
{
    vector<int> nums = { 2,5,6,3,2,4,1,2,3,6,55};

    cout<<findKthLargest(nums, 1)<<endl;
}