//FINDING PWAK ELEMENT IN AN ARRAY

#include<bits/stdc++.h>
using namespace std;

int peakElement(vector<int>& arr)
{
    int low = 0;
    int high = arr.size()-1;

    while(low < high)
    {
        int mid = (low + high)/2;

        if(arr[mid] < arr[mid+1])
            low = mid + 1;
        else
            high = mid;
    }

    return low;
}

int main()
{
    vector<int> arr = {1,3,20,4,1,0};

    int peak = peakElement(arr);

    cout << "Peak element index: " << peak << endl;
    cout << "Peak element value: " << arr[peak];

    return 0;
}