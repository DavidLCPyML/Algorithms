#include <bits/stdc++.h>
using namespace std;
 
#define FOR(i, st, n) for (int i = st; i < n; i++)
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

int main(){
    fastio

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    ll ans = 0;
    vi freq(26, 0);
    FOR (i, 0, s.size()) {
        freq[s[i]-'A']++;
    }
    revSort(freq);
    
    int i = 0;
    while (k > 0 && i <= n) {
        ans += pow(min(freq[i], k), 2);
        k -= freq[i];
        i++;
    }

    cout << ans << endl;
    return 0;
}
