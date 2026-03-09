//SEARCH IN A ROTATED ARRAY

#include<bits/stdc++.h>
using namespace std;

int searchRotated(vector<int>& arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == target)
            return mid;

        // Left half sorted
        if(arr[low] <= arr[mid])
        {
            if(arr[low] <= target && target < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }

        // Right half sorted
        else
        {
            if(arr[mid] < target && target <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {4,5,6,7,1,2,3};
    int target = 2;

    int index = searchRotated(arr, target);

    cout << "Target index: " << index;
}