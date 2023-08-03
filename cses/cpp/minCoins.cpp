#include <bits/stdc++.h>
using namespace std;
 
#define FOR(i, st, n) for (int i = st; i < n; i++)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define vpii vector<pii>
#define fastio ios::sync_with_stdio(false);cin.tie(0); 
#define mp make_pair
#define customSort(v, sortbyCond) std::sort(v.begin(), v.end(), sortbyCond)
#define contSort(n) std::sort(n.begin(), n.end())
#define revSort(n) std::sort(n.rbegin(), n.rend())
#define arrSort(n, len) sort(n, n + len)
#define ll long long int
 
// ifstream fin("input.txt");
// ofstream fout("output.txt");
const int MOD = 1e9 + 7;

template<typename T, typename T2>
void printPairVec(vector<pair<T, T2>> n) {
   for (int i = 0; i < n.size(); i++) {
       cout << n[i].first << ", " << n[i].second << endl;
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
bool sortbyCond(const pair<int, int>& a,
                const pair<int, int>& b) {
    if (a.first != b.first)
        return (a.first > b.first);
    else
       return (a.second < b.second);
}
struct greater
{
    template<class T>
    bool operator()(T const &a, T const &b) const { return a > b; }
};
void printvec(vector<int> n) {
    for (int i = 0; i < n.size(); i++) {
        cout << n[i] << " ";
    } cout << endl;
}
 
int dp[1000000 + 1] = { 0 };
 
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> coins(n);
 
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    sort(coins.begin(), coins.end());
    dp[0] = 0;
 
    for (int i = 1; i <= k; i++) {
        int curr = 1000001;
        for (int j = 0; j < n; j++) {
            if (i == coins[j]) {
                curr = 1;
            }
            else if (i > coins[j]) {
                if (dp[i - coins[j]] != 1000001) {
                    curr = min(curr, dp[i - coins[j]] + 1);
                }
            }
        }
 
        dp[i] = curr;
    }
 
 
    cout << ((dp[k] == 1000001) ? -1 : dp[k]) << endl;
 
    return 0;
}