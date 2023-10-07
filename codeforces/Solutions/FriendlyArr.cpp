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

template<typename T1, typename T2> ostream& operator<<(ostream& os, const pair<T1, T2>& p) {
    os << "(" << p.first << ", " << p.second << ")";
    return os;
}

template<typename T> ostream& operator<<(ostream& os, const vector<T>& v) {
    os << "[";
    for (size_t i = 0; i < v.size(); i++) {
        if (i) os << ", ";
        os << v[i];
    }
    os << "]";
    return os;
}

template<typename T> void print(T n, string name) {
    cout << name << ": " << n << endl;
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
    ll n, m;
    cin >> n >> m;

    vll a(n), b(m);
    ll xora = 0, orb = 0;
    FOR(i, 0, n) {
        cin >> a[i];
        xora ^= a[i];
    }
    FOR(i, 0, m) {
        cin >> b[i];
        orb |= b[i];
    }
    

    ll min_xor = 0, max_xor = 0;
    if (n % 2) {
        min_xor = xora;
        FOR(i, 0, n) {
            max_xor ^= (a[i] | orb);
        }
    } else {
        FOR(i, 0, n) {
            min_xor ^= (a[i] | orb);
        }
        max_xor = xora;
    }
    cout << min_xor << " " << max_xor << endl;
}

 
int main() {
    fastio

    int t;
    t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
 
    return 0;
}