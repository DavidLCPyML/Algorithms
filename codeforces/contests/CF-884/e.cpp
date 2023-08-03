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

void solve() {
    int n,m,k;
    cin >> n >> m >> k;

    vector<vi> grid(n, vi(m, 0));

    FOR(i, 0, k) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if(grid[x2 - 1][y2 - 1] != 0) {
            grid[x1 - 1][y1 - 1] = i;
        } else {
            grid[x2 - 1][y2 - 1] = i;
        }
        // grid[x2 - 1][y2 - 1] = i;
    }

    FOR(i, 0, n) {
        FOR(j, 0, m) {
            cout << grid[i][j] << " ";
        } cout << endl;
    }

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
