#include <bits/stdc++.h>
using namespace std;
 
#define FOR(i, st, n) for (int i = st; i < n; i++)
#define vi vector<int>
#define vll vector<ll>
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

bool rec(int a, int m) {
    if (a == m)
        return true;
    if (a % 3)
        return false;
    else return rec(a / 3, m) || rec(a / 3 * 2, m);
}

void solve() {
    int p;
    cin >> p;

    int ans = 0;
    FOR(x, 1, p) {
        int curr = 1;
        bool good = true;

        FOR(j, 1, p-1) {
            curr = (curr*x) % p;
            if(curr == 1) {
                good = false;
                break;
            }
        }
        if (good) ans++;
    }

    printf("%d\n", ans);
}

int main(){
    fastio

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
