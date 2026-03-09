//MAX ELEMNT IN A ROTATED ARRAY

#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int>& arr)
{
    int low = 0;
    int high = arr.size()-1;

    while(low < high)
    {
        int mid = (low + high)/2;

        if(arr[mid] > arr[high])
            low = mid + 1;
        else
            high = mid;
    }

    return arr[(low - 1 + arr.size()) % arr.size()];
}

int main()
{
    vector<int> arr = {4,5,6,7,1,2,3};

    cout << "Maximum element: " << findMax(arr);
}