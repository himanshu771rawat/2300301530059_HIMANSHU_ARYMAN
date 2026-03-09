//FINDING ODD APPERING ELEMENT

#include<bits/stdc++.h>
using namespace std;

int oddAppearing(vector<int>& arr)
{
    int low = 0;
    int high = arr.size() - 1;

    while(low < high)
    {
        int mid = (low + high) / 2;

        if(mid % 2 == 1)
            mid--;

        if(arr[mid] == arr[mid+1])
            low = mid + 2;
        else
            high = mid;
    }

    return arr[low];
}

int main()
{
    vector<int> arr = {1,1,2,2,3,4,4,5,5};

    cout << "Odd appearing element: " << oddAppearing(arr);

    return 0;
}