//FINDING MOUNTAIN PEKAK ELEMNT

#include<bits/stdc++.h>
using namespace std;

int mountainPeak(vector<int>& arr)
{
    int low = 0;
    int high = arr.size() - 1;

    while(low < high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] < arr[mid+1])
            low = mid + 1;
        else
            high = mid;
    }

    return low;
}

int main()
{
    vector<int> arr = {1,3,5,7,6,4,2};

    int peak = mountainPeak(arr);

    cout << "Peak index: " << peak << endl;
    cout << "Peak element: " << arr[peak];
}