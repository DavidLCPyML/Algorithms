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

template <typename T> std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec) {
    for (auto i: vec) {
        os << i << " ";
    }
    return os;
}
template <typename T1, typename T2> std::ostream& operator<<(std::ostream& os, const std::pair<T1, T2>& p) {
    os << p.first << " " << p.second;
    return os;
}
template<typename T> void printVec(vector<T> n) {
    for (int i = 0; i < n.size(); i++) {
        cout << n[i] << endl;
    }
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

void solve() {
    ll tables;
    cin >> tables;

    vector<vll> all_tables(tables, vll(tables, 0));

    FOR(i, 0, tables) {
        FOR(j, 0, tables) {
            cin >> all_tables[i][j];
        }
    }

    cout << all_tables[0][0] * all_tables[0][tables-1] * all_tables[tables-1][0] * all_tables[tables-1][tables-1] << endl;
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