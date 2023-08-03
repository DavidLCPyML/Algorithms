#include <bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define vd vector<double>
#define pii pair<int, int>
#define pdd pair<double, double>
#define vpdd vector<pdd>
#define vpii vector<pii>
#define ll long long
#define vl vector<ll>
#define fastio ios::sync_with_stdio(false);cin.tie(0); 
#define mp make_pair
#define customSort(v, sortbyCond) sort(v.begin(), v.end(), sortbyCond)
#define contSort(vec) sort(vec.begin(), vec.end())
#define arrsort(n, len) sort(n, n + len)
 
ifstream fin("input.txt");
ofstream fout("output.txt");
const int MOD = 1e9 + 7;
 
template<typename T, typename T2>
void printPairVec(vector<pair<T, T2>> n) {
   for (int i = 0; i < n.size(); i++) {
       cout << n[i].first << " " << n[i].second << endl;
   }
}
template<typename T>
void printNestVec(vector<vector<T>> n) {
   for (int i = 0; i < n.size(); i++) {
       printStruct(n[i]);
   }
}
template<class C>
void printStruct(C &n) {
   for (auto i: n) {
       cout << i << " ";
   } cout << endl;
}

signed main() {
    fastio

    int n;
    cin >> n;

    vi ideas(n, 0);

    for(int i=0;i<3;i++) {
        for(int j=0;j<n;j++) {
            int x;
            cin >> x;

            ideas[j] = max(ideas[j], x);
        }
    }
    // printStruct(ideas);

    vi dp(n+1, 0);
    dp[0] = 0;
    dp[1] = ideas[0];

    // printStruct(dp);/

    for(int i=2;i<=n;i++) {
        dp[i] = max(dp[i-1], dp[i-2] + ideas[i-1]);
    }

    // printStruct(dp);

    cout << dp[n] << endl;

    return 0;
}

/*

*/