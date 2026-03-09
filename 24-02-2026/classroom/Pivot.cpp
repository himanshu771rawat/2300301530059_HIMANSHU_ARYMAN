//find pivot element

#include<bits/stdc++.h>
using namespace std;

int findPivot(vector<int>& arr)
{
    int low = 0;
    int high = arr.size() - 1;

    while(low < high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] > arr[high])
            low = mid + 1;
        else
            high = mid;
    }

    return low;
}

int main()
{
    vector<int> arr = {4,5,6,7,1,2,3};

    int pivot = findPivot(arr);

    cout << "Pivot index: " << pivot << endl;
    cout << "Pivot element: " << arr[pivot];
}