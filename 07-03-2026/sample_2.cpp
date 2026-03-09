//FINDING MAXSUM OF SUBARRAY OF NOT MORE THAN K DISTINCT ELEMENTS OF AN ARRAY

#include<bits/stdc++.h>
using namespace std;

int goodarray(vector<int>& arr, int k) {

    int maxsum =0;
    int l = 0;
    int sum = 0;

    unordered_map<int,int> freq;

    for(int r = 0; r < arr.size(); r++) {

        sum += arr[r];
        freq[arr[r]]++;

        while(freq.size() > k) {

            sum -= arr[l];
            freq[arr[l]]--;

            if(freq[arr[l]] == 0) {
                freq.erase(arr[l]);
            }

            l++;
        }

        maxsum = max(maxsum, sum);
    }

    return maxsum;
}

int main() {

    int N, k;

    cout << "Enter size of array: ";
    cin >> N;

    vector<int> arr(N);

    cout << "Enter elements: ";
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << "Enter k: ";
    cin >> k;

    int ans = goodarray(arr, k);

    cout << "Maximum Good Subarray Sum: " << ans << endl;

    return 0;
}