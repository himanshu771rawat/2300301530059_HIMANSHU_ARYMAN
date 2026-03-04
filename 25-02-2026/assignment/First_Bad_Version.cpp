#include <bits/stdc++.h>
using namespace std;

// Mock API (assume first bad = 4)
bool isBadVersion(int version) {
    return version >= 4;
}

int firstBadVersion(int n) {
    int low = 1, high = n;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (isBadVersion(mid))
            high = mid;       // first bad left me ho sakta hai
        else
            low = mid + 1;    // first bad right me
    }

    return low;
}

int main() {
    int n = 10;
    cout << firstBadVersion(n) << endl;  // Output: 4
    return 0;
}