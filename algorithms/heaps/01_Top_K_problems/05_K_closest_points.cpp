//This time we use a Max heap because we have to kick out the farthest one

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>>kClosest(vector<vector<int>>&points, int k)
{
    priority_queue<pair<int,vector<int>>>maxHeap;

    for (auto &point: points)
    {
        int x = point[0];
        int y = point[1];

        int dis= x*x + y*y;

        maxHeap.push({dis, point});

        if(maxHeap.size()>k) maxHeap.pop();
    }

    vector<vector<int>>result;

    while(!maxHeap.empty())
    {
        result.push_back(maxHeap.top().second);
        maxHeap.pop();
    }

    return result;
}


int main()
{
    int n;
    cout << "Enter number of points: ";
    cin >> n;

    vector<vector<int>> points(n, vector<int>(2));

    cout << "Enter x and y coordinates:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> points[i][0]
            >> points[i][1];
    }

    int k;
    cout << "Enter k: ";
    cin >> k;

    vector<vector<int>> result =kClosest(points, k);

    cout << "\nK Closest Points:\n";

    for(auto& point : result)
    {
        cout << point[0]
             << " "
             << point[1]
             << "\n";
    }

    return 0;
}
