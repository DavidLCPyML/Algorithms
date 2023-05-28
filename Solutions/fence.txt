#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> nums(n+1, 0);
    for(int i=1;i<=n;i++) {
        cin >> nums[i];
        nums[i] += nums[i-1];
        // int x;
        // cin >> x;
        // nums[i] = nums[i-1] + x;
    }

    // vector<int>pref(n+1, 0);
    // for(int i=1;i<n+1;i++) {
    //     pref[i] = pref[i-1] + nums[i-1];
    // }
    
    // for(int i:nums) {
    //     cout << i << " ";
    // }cout << endl;

    int sum = INT_MAX;
    int pos = 0;
    
    for(int i=k;i<=n;i++) {
        int diff = nums[i] - nums[i-k];

        if(diff < sum) {
            sum = diff;
            pos = i-k;
        }

        // cout << nums[i] - nums[i-k] << " " << endl;
    }
    // cout << endl;

    cout << pos+1 << endl;

    return 0;
}