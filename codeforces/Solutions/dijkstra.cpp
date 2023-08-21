#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
#include <cmath>
#include <unordered_map>
#include <climits>
#include <queue>
#include <stack>
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
    
}

 
int main() {
    fastio

    // int t;
    // t = 1;
    // // cin >> t;
    // while(t--) {
    //     solve();
    // }

    ll n, m;
    cin >> n >> m;

    vector<vpll> adj(n);
    FOR(i, 0, m) {
        ll s, d, w;
        cin >> s >> d >> w;
        adj[s-1].push_back(make_pair(d-1, w));
        adj[d-1].push_back(make_pair(s-1, w));
    }

    vll dist(n, LLONG_MAX), prev(n, -1);
    priority_queue<ll> pq;
    dist[0] = 0;
    pq.push(0);

    while(!pq.empty()) {
        ll src = pq.top();
        pq.pop();

        for(auto i: adj[src]) {
            if(dist[i.first] > dist[src] + i.second) {
                dist[i.first] = dist[src] + i.second;
                prev[i.first] = src;
                pq.push(i.first);
            }
        }
    }

    if (prev[n-1] == -1) {
        cout << "-1\n";
        return 0;
    }
    ll curr = n-1;
    vll ans;
    while(curr != -1) {
        ans.push_back(curr + 1);
        curr = prev[curr];
    }

    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i] << " ";
    } cout << endl;
 
    return 0;
}