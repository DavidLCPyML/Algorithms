#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
#include <cmath>
#include <map>
#include <queue>
#include <climits>
#include <unordered_map>
using namespace std;
 
#define FOR(i, st, n) for (int i = st; i < n; i++)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpii vector<pii>
#define vpll vector<pll>
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
template <typename T1, typename T2> bool sortbyCond(const pair<T1, T2>& a,
                const pair<T1, T2>& b) {
    if (a.first != b.first)
        return (a.first > b.first);
    else
       return (a.second > b.second);
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

bool check(vi &a) {
    int checkval = a[0];
    FOR(i, 0, a.size())
        if (a[i] != checkval)
            return false;
    return true;
}

ll lcm (ll a, ll b) {
    return (a * b) / __gcd(a, b);
}

void solve() {
    ll n;
    cin >> n;
    vi a(n), pref(n);
    FOR(i, 0, n) {
        cin >> a[i];
        pref[i] = a[i] ^ pref[i - 1];
    }
    string s;
    cin >> s;

    ll ones = 0, zeros = 0;
    FOR(i, 0, n) {
        if (s[i] - '0') {
            ones = ones ^ a[i];
        } else {
            zeros = zeros ^ a[i];
        }
    }
    
    ll q;
    cin >> q;

    while (q--) {
        ll type;
        cin >> type;
        if (type == 1) {
            ll l, r;
            cin >> l >> r;
            l--; r--;

            ll val = pref[r] ^ pref[l - 1];
            // cout << type << " " << zeros ^ val << " " << ones ^ val << endl;
            zeros = zeros ^ val;
            ones = ones ^ val;
        } else {
            char c;
            cin >> c;
            cout << (c == '0' ? zeros : ones) << " ";
        }
    }
    cout << endl;

}

 
int main() {
    fastio

    int t;
    // t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
 
    return 0;
}