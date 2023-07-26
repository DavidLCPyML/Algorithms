#include <bits/stdc++.h>
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

bool check(int mid, int n, vpll ranges, vi queries) {
    vi a(n+1, -1);
    a[0] = 0;
    FOR(i, 0, mid) {
        a[queries[i]] = 1;
    }
    FOR(i, 0, n)
        a[i+1] += a[i];
    for(auto i: ranges)
        if (a[i.second] > a[i.first-1])
            return true;
    return false;
}

void solve() {
    ll n, m;
    cin >> n >> m;

    vpll ranges(m);
    FOR(i, 0, m) {
        cin >> ranges[i].first >> ranges[i].second;
    }

    ll q;
    cin >> q;
    vi queries(q);
    FOR(i, 0, q) {
        cin >> queries[i];
    }

    if(!check(q, n, ranges, queries)) {
        cout << -1 << endl;
        return;
    }
    ll l = 0, r = q;
    while (r - l > 1) {
        m = (l + r) / 2;
        if (check(m, n, ranges, queries))
            r = m;
        else
            l = m;
    }

    cout << r << endl;
    
    
    return;
}

int main(){
    fastio

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
