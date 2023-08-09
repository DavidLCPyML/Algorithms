#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
#include <cmath>
#include <unordered_map>
using namespace std;
 
#define FOR(i, st, n) for (int i = st; i < n; i++)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
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
    for (size_t i = 0; i < n.size(); i++) {
        cout << n[i] << " ";
    } cout << endl;
}

void solve() {
    int n;
    cin >> n;
    vll a(n), cnt(n, 0), sums(n, 0), pref(n, 0);

    FOR(i, 0, n) {
        cin >> a[i];
        (i == 0) ? pref[i] = a[i] : pref[i] = pref[i-1] + a[i];
    }

    if (pref[n-1] % 3)
        cout << 0 << endl;
    else {
        for(int i = n-1; i >= 1; i--)
            if(pref[n-1] - pref[i-1] == pref[n-1]/3)
                cnt[i] = 1;

        for(int i = n - 2; i >= 0; --i)
            cnt[i] += cnt[i+1];
        
        ll ans = 0;
        for(int i = 0; i + 2 < n; i++)
            if(pref[i] == pref[n-1]/3)
                ans += cnt[i+2];
        cout << ans << endl;
    }
    return;
}

 
int main() {
    fastio

    int t;
    t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
 
    return 0;
}