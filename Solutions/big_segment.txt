#include <bits/stdc++.h>
using namespace std;

//custom comparator
struct Comp {
    bool operator()(const pair<int, int> &a, const pair<int, int> &b) {
        if(a.first != b.first) {
            return a.first < b.first;
        }
        return a.second > b.second;
    }
};

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> segments(n);
    int maxN = -1;
    int minN = INT_MAX;

    for(int i=0;i<n;i++) {
        cin >> segments[i].first >> segments[i].second;
        maxN = max(maxN, segments[i].second);
        minN = min(minN, segments[i].first);
    }

    // Comp comparator;
    // sort(segments.begin(), segments.end(), comparator);

    for(int i=0;i<n;i++) {
        if(segments[i].first <= minN && segments[i].second >= maxN) {
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    // cout << maxN << endl;
    // for(int i = 0; i < n; i++) {
    //     cout << segments[i].first << " " << segments[i].second << endl;
    // }

    return 0;
}