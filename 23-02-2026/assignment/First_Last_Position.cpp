//FIND THE FIRST AND LAST POSITION OF AN ELEMENT IN A SORTED ARRAY

#include <bits/stdc++.h>
using namespace std;

int firstOcc(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            ans = mid;
            high = mid - 1; // move left
        }
        else if (nums[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

int lastOcc(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            ans = mid;
            low = mid + 1; // move right
        }
        else if (nums[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

vector<int> searchRange(vector<int>& nums, int target) {
    int first = firstOcc(nums, target);
    int last = lastOcc(nums, target);
    return {first, last};
}

int main() {
    int n, target;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target element: ";
    cin >> target;

    vector<int> ans = searchRange(nums, target);

    // Earlier we were printing: cout << ans[0] << " " << ans[1];

    cout << "\n===== RESULT =====\n";
    if (ans[0] == -1) {
        cout << "Target " << target << " not found in array.\n";
    } else {
        cout << "First Occurrence Index : " << ans[0] << endl;
        cout << "Last Occurrence Index  : " << ans[1] << endl;
    }

    return 0;
}