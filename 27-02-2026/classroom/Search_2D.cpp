//SEARCHING A ELEMENT IN A 2D MATRIX (RETURNING  THE INDEX OF THE TARGET ELEMENT)

#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {

    int rows = matrix.size();
    int cols = matrix[0].size();

    int low = 0;
    int high = rows * cols - 1;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        int element = matrix[mid / cols][mid % cols];

        if(element == target)
            return true;

        else if(element < target)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return false;
}

int main() {

    vector<vector<int>> matrix = {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };

    int target = 3;

    cout << boolalpha << searchMatrix(matrix, target);

    return 0;
}