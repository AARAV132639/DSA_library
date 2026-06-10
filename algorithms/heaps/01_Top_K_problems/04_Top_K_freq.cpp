#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

vector<int>topKfreqeunt(vector<int>&nums, int k)
{
    unordered_map<int,int>freq;

    for(int num:nums) freq[num]++;
    
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>minHeap;

    for(auto &entry: freq)
    {
        minHeap.push({entry.second, entry.first});

        if(minHeap.size()>k) minHeap.pop();
    }

        vector<int>result;

        while(!minHeap.empty()) 
        { result.push_back(minHeap.top().second);
            minHeap.pop();
        }
       
        return result;
}

int main()
{
    vector<int>nums= {1,1,1,1,1,2,2,2,2,3,3};

    vector<int>ans= topKfreqeunt(nums,2);

    for(int x: ans) cout<<x<<" ";
}