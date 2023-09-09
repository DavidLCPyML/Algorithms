#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
#include <cmath>
#include <map>
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

void solve() {
    int n, m;
    cin >> n >> m;
    int p1, p2;
    cin >> p1 >> p2;
    int q1, q2;
    cin >> q1 >> q2;

    vi enemies(m, 0);
    FOR(i, 0, m) {
        cin >> enemies[i];
    }

    bool canWin = true;
    FOR(i, 0, m) {
        int charge = enemies[i] / q1 + (enemies[i] % q1 != 0);
        
        int healthleft = max(0, enemies[i] - p1);
        int charges = healthleft / q1 + (healthleft % q1 != 0);

        int ans = min(charges * q2 + p2, charge * q2);
        if (n - ans <= 0) {
            canWin = false;
            break;
        }
        n -= ans;
    }

    cout << (canWin ? "YES" : "NO") << endl;

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