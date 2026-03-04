//DIVIDING TWO NUMBERS USING BINARY SEARCH


#include <bits/stdc++.h>
using namespace std;

long long multiply(long long a, long long b) {
    long long res = 0;
    while (b--) res += a;
    return res;
}

int divide(int dividend, int divisor) {
    long long low = 0, high = abs((long long)dividend);
    long long ans = 0;

    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (multiply(mid, abs(divisor)) <= abs(dividend)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // sign handle
    if ((dividend < 0) ^ (divisor < 0))
        ans = -ans;

    return ans;
}

int main() {
    int dividend = 20, divisor = 3;
    cout << divide(dividend, divisor) << endl; // Output: 6
}