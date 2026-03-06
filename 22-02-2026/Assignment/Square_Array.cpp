//SQUARING ELEMENTS OF ARRAY AND THEN RETURNING IT IN SORTED ORDER

#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {

    int n = nums.size();

    vector<int> result(n);

    int left = 0;
    int right = n - 1;
    int pos = n - 1;

    while(left <= right) {

        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];

        if(leftSquare > rightSquare) {
            result[pos] = leftSquare;
            left++;
        }
        else {
            result[pos] = rightSquare;
            right--;
        }

        pos--;
    }

    return result;
}

int main() {

    vector<int> nums = {-4,-1,0,3,10};

    vector<int> ans = sortedSquares(nums);

    for(int x : ans)
        cout << x << " ";
}