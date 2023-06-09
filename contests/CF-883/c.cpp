#include <bits/stdc++.h>
using namespace std;
 
#define FOR(i, st, n) for (int i = st; i < n; i++)
#define vi vector<int>
#define pii pair<int, int>
#define vpll vector<pair<ll, ll>>
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
bool sortbyCond(const pair<ll, ll>& a,
                const pair<ll, ll>& b) {
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
    int n, m, k;
    cin >> n >> m >> k;

    vector<vi> times(n, vi(m, 0));
    FOR(i, 0, n) {
        FOR(j, 0, m) {
            cin >> times[i][j];
        }
    }

    vpll ans;
    pair<ll, ll> rudolph;
    FOR(i, 0, n) {
        contSort(times[i]);
        ll cnt = 0, penalty = 0;
        ll j = 0, time = 0;
        while (j < m && time + times[i][j] <= k) {
            cnt++;
            time += times[i][j];
            penalty += time;
            j++;
        }

        ans.push_back(mp(cnt, penalty));
        if (i == 0) {
            rudolph = mp(cnt, penalty);
        }
    }

    customSort(ans, sortbyCond);

    FOR(i, 0, n) {
        if (ans[i].first == rudolph.first && ans[i].second == rudolph.second) {
            cout << i + 1 << '\n';
            return;
        }
    }
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
