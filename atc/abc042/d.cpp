#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
#include <cmath>
#include <unordered_map>
#include <set>
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
void printPairVec(vector<pair<T, T2> > n) {
   for (int i = 0; i < n.size(); i++) {
       cout << n[i].first << ", " << n[i].second << endl;
   }
}
template<typename T>
void printNestVec(vector<vector<T> > n) {
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

const ll MAXN = 2e5 + 1;
ll fac[MAXN];
ll inv[MAXN];

ll fastexp(ll base, ll pow) {
    base %= MOD;
    ll ans = 1;
    while (pow) {
        if (pow & 1)
            ans = ans * base % MOD;
        base = base * base % MOD;
        pow >>= 1;
    }

    return ans;
}

ll choose (ll n, ll m) {
    return (((fac[n] * inv[m]) % MOD) * inv[n - m]) % MOD;
}

void solve() {
    int h,w,a,b;
    cin >> h >> w >> a >> b;

    // rolling dp TLE
    // from[0] = 1;
    // for (int i = 0; i < h; i++) {
    //     if (i < h-a) {
    //         to[0] = from[0];
    //         for(int j = 1; j < w; j++) {
    //             to[j] = (from[j] + to[j-1]) % MOD;
    //             from[j] = to[j];
    //         }
    //     } else {
    //         to[b-1] = 0;
    //         // from[b-1] = 0;
    //         for(int j = b; j < w; j++) {
    //             to[j] = (from[j] + to[j-1]) % MOD;
    //             from[j] = to[j];
    //         }
    //     }
    // }
    // cout << from[w-1] << endl;   

    fac[0] = 1;
    ll ans = 0;
    FOR(i, 1, MAXN + 1)
        fac[i] = (fac[i-1] * i) % MOD;
    inv[MAXN] = fastexp(fac[MAXN], MOD-2);
    for(int i = MAXN; i >= 0; i--)
        inv[i-1] = (inv[i] * i) % MOD;

    ll prev = 0, r, val, tomult, toadd;
    for (int i = b; i < w; i++){
        r = h - a - 1;
        val = (choose(r + i, i) + MOD) % MOD;
        tomult = (choose(h - r + w - i - 2, h - r - 1) + MOD) % MOD;
        toadd = (((((val - prev) + MOD) % MOD) * tomult) + MOD) % MOD;
        prev = (prev + (val-prev + MOD)) % MOD;
        ans = (ans + toadd + MOD)  % MOD;
    }
    cout << ans << endl;
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