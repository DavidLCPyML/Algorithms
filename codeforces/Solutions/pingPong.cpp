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

vpii intervals;

void solve() {
    return;
}

void dfs(vpii &intervals, int a, int b) {
    stack<pair<pii, int>> s;
    vector<bool> visited(intervals.size(), false);
    s.push(make_pair(intervals[a], a));
    visited[a] = true;
    
    while(!s.empty()) {
        pair<pii, int> curr = s.top();
        s.pop();

        if(curr.first.first == intervals[b].first && curr.first.second == intervals[b].second) {
            cout << "YES\n";
            return;
        }

        for(int i = 0; i < intervals.size(); i++) {
            pii d = intervals[i];
            if((d.first < curr.first.first && d.second > curr.first.first) || (d.first < curr.first.second && d.second > curr.first.second)) {
                if (visited[i]) continue;
                s.push(make_pair(d, i));
                visited[i] = true;
            }
        }
    }
    cout << "NO\n";
}

 
int main() {
    fastio

    // int t;
    // // t = 1;
    // cin >> t;
    // while(t--) {
    //     solve();
    // }

    int n;
    cin >> n;
    FOR(i, 0, n) {
        int type, a, b;
        cin >> type >> a >> b;

        if(type == 1) {
            intervals.push_back(make_pair(a, b));
        } else {
            dfs(intervals, a-1, b-1);
        }
    }

    return 0;
}