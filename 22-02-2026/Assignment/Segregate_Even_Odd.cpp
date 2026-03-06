// SEPERATING ELEMENTS IN ARRAY (EVEN IN LEFT AND ODD IN RIGHT)

#include <bits/stdc++.h>
using namespace std;

void segregate(vector<int>& arr) {

    int left = 0;
    int right = arr.size() - 1;

    while(left < right) {

        while(arr[left] % 2 == 0 && left < right)
            left++;

        while(arr[right] % 2 == 1 && left < right)
            right--;

        swap(arr[left], arr[right]);
    }
}

int main() {

    vector<int> arr = {12,17,70,15,22,65,21,90};

    segregate(arr);

    for(int x : arr)
        cout << x << " ";
}