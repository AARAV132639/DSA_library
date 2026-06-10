#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class KthLargest
{

private:
        int k; 
        priority_queue<int, vector<int>, greater<int>>minHeap;

public:
        
        KthLargest(int k, vector<int>&nums)
        {
            this->k =k;

            for(int num:nums)
            {
                minHeap.push(num);

                if(minHeap.size()>k) minHeap.pop();
            }
        }

        int add (int val)
        {
            minHeap.push(val);

            if(minHeap.size()>k) minHeap.pop();

            return minHeap.top(); //gives the weakest VIP
        }
    
    
    };

    int main()
    {
        vector<int>nums = {4,5,8,2};

        KthLargest kth(3, nums);

        cout<<kth.add(3)<<endl;
        cout<<kth.add(10)<<endl;
        cout<<kth.add(9)<<endl;
        cout<<kth.add(4)<<endl;

    }

