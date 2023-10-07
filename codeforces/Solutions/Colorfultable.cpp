#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
#include <cmath>
#include <set>
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
    ll n, k;
    cin >> n >> k;

    vll a(n);
    set<int> unique;
    FOR(i, 0, n) {
        cin >> a[i];
        unique.insert(a[i]);
    }

    ll left = 0, right = n-1;
    FOR(i, 1, k+1) {
        if (unique.find(i) == unique.end()) {
            cout << "0 ";
        } else {
            while (a[left] < i) {
                left++;
            }
            while (a[right] < i) {
                right--;
            }
            cout << 2*(right - left + 1) << " ";
        }
    } cout << endl;
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