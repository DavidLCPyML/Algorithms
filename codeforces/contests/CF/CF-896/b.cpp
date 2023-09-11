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

void solve() {
    int n, k, a, b;
    cin >> n >> k >> a >> b;

    vpll cities(n);

    // first k are "major" cities
    FOR(i, 0, k) {
        ll x, y;
        cin >> x >> y;
        cities[i] = mp(x, y);
    }
    FOR(i, k, n) {
        ll x, y;
        cin >> x >> y;
        cities[i] = mp(x, y);
    }

    // printPairVec(cities);
    a--; b--;

    ll mindisttoA = abs(cities[a].first - cities[b].first) + abs(cities[a].second - cities[b].second);
    // find the closest major city to a
    FOR(i, 0, k) {
        ll dist = abs(cities[i].first - cities[a].first) + abs(cities[i].second - cities[a].second);
        mindisttoA = min(mindisttoA, dist);
    }
    if (a < k) {
        mindisttoA = 0;
    }

    // find the closest major city to b
    ll mindistToB = abs(cities[a].first - cities[b].first) + abs(cities[a].second - cities[b].second);
    FOR(i, 0, k) {
        ll dist = abs(cities[i].first - cities[b].first) + abs(cities[i].second - cities[b].second);
        mindistToB = min(mindistToB, dist);
    }
    if (b < k) {
        mindistToB = 0;
    }

    // cheaper to fly straight?
    ll straightdist = abs(cities[a].first - cities[b].first) + abs(cities[a].second - cities[b].second);
    cout << min(mindisttoA + mindistToB, straightdist) << endl;
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