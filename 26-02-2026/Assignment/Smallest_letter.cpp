// FINDING SMALLEST LETTER THAT IS JUST GREATER THAN TARGET IN AN ARRAY

#include <bits/stdc++.h>
using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) {
    int low = 0, high = letters.size() - 1;
    char ans = letters[0];   // default for wrap-around

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (letters[mid] > target) {
            ans = letters[mid];   // store possible answer
            high = mid - 1;       // search left
        }
        else {
            low = mid + 1;        // search right
        }
    }

    return ans;
}
int main() {
    vector<char> letters = {'a','d','f','l','p','t','w','z'};
    char target = 'i';

    char result=nextGreatestLetter( letters, target);

    cout<<"THE JUST NEXT LETTER IS :"<<result;

    return 0;

}


