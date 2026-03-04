#include <bits/stdc++.h>
using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) {
    int low = 0;
    int high = letters.size() - 1;

    char ans = letters[0];   // wrap-around case

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (letters[mid] > target) {
            ans = letters[mid];   // possible answer store
            high = mid - 1;       // left search
        }
        else {
            low = mid + 1;        // right search
        }
    }

    return ans;
}

int main() {

    vector<char> letters = {'c','f','j'};
    char target = 'a';

    char result = nextGreatestLetter(letters, target);

    cout << "Next greatest letter is: " << result;

    return 0;
}