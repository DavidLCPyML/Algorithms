#include <bits/stdc++.h>
using namespace std;
 
#define FOR(i, st, n) for (int i = st; i < n; i++)
#define FORS(i, st, n, step) for (int i = st; i < n; i+= step)
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define fastio ios::sync_with_stdio(false);cin.tie(0); 
#define mp make_pair
#define customSort(v, sortbyCond) std::sort(v.begin(), v.end(), sortbyCond)
#define contSort(n) std::sort(n.begin(), n.end())
#define revSort(n) std::sort(n.rbegin(), n.rend())
#define arrSort(n, len) sort(n, n + len)
#define ll int
#define int long long int
 
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

void solve() {
    ll n,m;
    cin >> n >> m;
    vector<ll> line(n, 0);

    FOR(i, 0, n) {
        cin >> line[i];
    }
    contSort(line);
    FOR(i, 0, m) {
        ll a,b,c;
        cin >> a >> b >> c;
        ll k = lower_bound(line.begin(), line.end(), b) - line.begin();
        ll r = 4*a*c;

        if(k < n && pow(b-line[k], 2) < double(r)) {
            cout << "YES\n" << line[k] << '\n';
        } else if (k > 0 && pow(b-line[k-1], 2) < double(r)) {
            cout << "YES\n" << line[k-1] << '\n';
        } else {
            cout << "NO\n";
        } 
        
    }
    return;
}

int main(){
    fastio

    int t;
    cin >> t;
    // t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
