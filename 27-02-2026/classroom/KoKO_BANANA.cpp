//FINDING MIN SPEED TO FINISH PILES OF BANANAS IN GIVEN TIME 

#include <bits/stdc++.h>
using namespace std;

long long calculateHours(vector<int>& piles, int k) {
    long long hours = 0;

    for(int bananas : piles) {
        hours += ceil((double)bananas / k);
    }

    return hours;
}

int minEatingSpeed(vector<int>& piles, int h) {

    int low = 1;
    int high = *max_element(piles.begin(), piles.end());

    int ans = high;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        long long hours = calculateHours(piles, mid);

        if(hours <= h) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {

    vector<int> piles = {3,6,7,11};
    int h = 8;

    cout << minEatingSpeed(piles, h);

}