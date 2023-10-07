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
    ll n;
    cin >> n;

    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;


    // ffind minimum number of steps for a knight to reach from (x1, y1) to (x2, y2)
    if (x1 == x2 && y1 == y2) {
        cout << 0 << endl;
        return;
    }

    queue<pair<ll, ll>> q;
    q.push(mp(x1, y1));
    vector<vector<bool>> visited(n+1, vector<bool>(n+1, false));
    visited[x1][y1] = true;
    vector<vector<ll>> dist(n+1, vector<ll>(n+1, 0));
    dist[x1][y1] = 0;
    vpll dirs = {mp(2, 1), mp(2, -1), mp(-2, 1), mp(-2, -1), mp(1, 2), mp(1, -2), mp(-1, 2), mp(-1, -2)};
    
    while(!q.empty()) {
        pll curr = q.front();
        q.pop();
        ll x = curr.first;
        ll y = curr.second;

        if (x == x2 && y == y2) {
            cout << dist[x][y] << endl;
            return;
        }

        for (auto dir: dirs) {
            ll newX = x + dir.first;
            ll newY = y + dir.second;
            if (newX >= 1 && newX <= n && newY >= 1 && newY <= n && !visited[newX][newY]) {
                visited[newX][newY] = true;
                dist[newX][newY] = dist[x][y] + 1;
                q.push(mp(newX, newY));
            }
        }
    }

    cout << -1 << endl;
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