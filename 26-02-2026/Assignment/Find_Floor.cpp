// FINDING FLOOR OF A NUMBER IN A SORTED ARRAY

#include <bits/stdc++.h>
using namespace std;

int findFloor(vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1;
    int ans = -1;   // if floor doesn't exist

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return arr[mid];        // exact match = floor
        else if (arr[mid] < x) {
            ans = arr[mid];         // potential floor
            low = mid + 1;          // search right for larger closer value
        }
        else {
            high = mid - 1;         // move left
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1,2,4,6,8};
    int x = 5;

    cout << findFloor(arr, x) << endl;  // Output: 4
}