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
    int n,m,k;
    cin >> n >> m >> k;

    vll a(n, 0), inc(n, 0), times(m, 0);
    FOR(i, 0, n) { cin >> a[i]; }

    vector<pair<pll, ll>> ops;
    FOR(i, 0, m) {
        ll l, r, d;
        cin >> l >> r >> d;
        ops.push_back(make_pair(make_pair(l, r), d));
    }

    FOR(i, 0, k) {
        ll l, r;
        cin >> l >> r;
        times[l-1]++;
        if(r < m)
            times[r]--;
    }
    FOR(i, 1, times.size()) { times[i] += times[i-1]; }

    // printStruct(times);
    FOR(i, 0, times.size()) {
        ll l = ops[i].first.first;
        ll r = ops[i].first.second;
        inc[l-1] += times[i] * ops[i].second;
        if (r < n) 
            inc[r] -= times[i] * ops[i].second;
    }
    FOR(i, 1, inc.size())
        inc[i] += inc[i-1];

    FOR(i, 0, n) {
        a[i] += inc[i];
        cout << a[i] << " ";
    }
    cout << endl;
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