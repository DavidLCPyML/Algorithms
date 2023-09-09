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
    int n, f, s;
    cin >> n >> f >> s;
    vi fried(n), scrambled(n);
    FOR(i, 0, n) {
        cin >> fried[i] >> scrambled[i];
    }

    vector<vector<vll> > dp(n + 1, vector<vll>(f + 1, vll(s + 1, 0)));
    // dp[i][j][k] = max satis given I can choose first i dishes and cannot go over j fried and k scrambled
    FOR(i, 0, n + 1) {
        FOR(j, 0, f + 1) {
            FOR(k, 0, s + 1) {
                // cout << i << " " << j << " " << k << endl;
                if (i == 0) {
                    dp[i][j][k] = 0;
                }
                else if (j == 0 && k == 0) {
                    dp[i][j][k] = 0;
                } else {
                    dp[i][j][k] = -1;
                    if (j > 0) {
                        dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j - 1][k] + fried[i - 1]);
                    }
                    if (k > 0) {
                        dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j][k - 1] + scrambled[i - 1]);
                    }
                    dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j][k]);
                }
            }
        }
    }

    // FOR(i, 0, n + 1) {
    //     FOR(j, 0, f + 1) {
    //         FOR(k, 0, s + 1) {
    //             cout << dp[i][j][k] << " ";
    //         } cout << endl;
    //     } cout << endl;
    // }

    cout << dp[n][f][s] << endl;

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