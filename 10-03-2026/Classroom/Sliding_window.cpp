

#include<bits/stdc++.h>
using namespace std;

int sliding(vector<int>& arr,int k) {

    int sum=0;

    for (int i=0;i<k;i++) {
        sum+=arr[i];

    }
    int maxsum=sum;

    for (int i=k;i<arr.size();i++) {
        sum+=arr[i];
        sum-=arr[i-k];

        maxsum=max(maxsum,sum);

    }
    return maxsum;
}
int main() {
    vector<int> arr={2,1,5,1,3,2};
    int k=3;
    
    cout<<sliding(arr,k);
}
