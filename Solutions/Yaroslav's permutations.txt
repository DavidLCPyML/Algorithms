#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> freq;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;

        freq[x]++;
        if(freq[x] > ((n+1)/2)) {
            cout << "NO" << endl;
            return 0;
        }
    }

    // for(auto i : freq) {
    //     cout << i.first << " " << i.second << endl;
    // }

    cout << "YES" << endl;
    return 0;
}