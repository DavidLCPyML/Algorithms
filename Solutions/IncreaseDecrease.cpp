#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

int main() {
    int n;
    cin >> n;
    vi nums(n);

    int sum = 0;
    for(int i=0;i<n;i++) {
        cin >> nums[i];
        sum += nums[i];
    }
    
    // we can always get n-1 values (n-1 ocurrences of 0, 1 extra to offload everything)
    if(sum % n) {
        cout << n-1 << endl;
    } else {
        // but wait: if sum is divisible by n, we can technically get n equal elems (evenly distributable)
        cout << n << endl;
    }

    return 0;
}