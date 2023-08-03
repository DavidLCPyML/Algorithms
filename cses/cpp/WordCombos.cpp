#include <bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define ll long long
#define vl vector<ll>
#define fastio ios::sync_with_stdio(false);cin.tie(0); 
#define mp make_pair
#define customSort(v, sortbyCond) sort(v.begin(), v.end(), sortbyCond)
#define contSort(vec) sort(vec.begin(), vec.end())
#define arrsort(n, len) sort(n, n + len)
 
ifstream fin("input.txt");
ofstream fout("output.txt");
const int MOD = 1e9 + 7;
 
template<typename T, typename T2>
void printPairVec(vector<pair<T, T2>> n) {
   for (int i = 0; i < n.size(); i++) {
       cout << n[i].first << " " << n[i].second << endl;
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
 
//uses aho-corasick suffix automata algorithm to track illegal hashes
const long long md = 1e9+7;
const int MAXE = 1e6+1;
const int maxN = 5e3+1;
long long trie[MAXE][26];
bool stop[MAXE];
long long dp[maxN];
long long ct = 0;
 
void insert(string s) {
    ll node = 0;
    for (ll i = 0; i < s.size(); i++) {
        int charasc = s[i]-'a';
        if (!trie[node][charasc]) {
            trie[node][charasc] = ++ct;
        }
        node = trie[node][charasc];
    }
    stop[node] = 1;
}

string s;
long long search(long long x) {
    long long node = 0, ans = 0;
    for (long long i = x; i < s.size(); i++) {
        int charasc = s[i]-'a';
        int val = trie[node][charasc];
        
        if (!val) return ans;
        node = val;
        if (stop[node]) {
            ans = (ans + dp[i+1]) % md;
        }
    }
    return ans;
}
 
void solve() {
    cin >> s;
    long long k; 
    cin >> k;
    while(k--) {
        string x;
        cin >> x;
        insert(x);
    }

    dp[s.size()] = 1;
    for (long long i = s.size() - 1; i >= 0; i--) {        
        dp[i] = search(i);
    }
    cout << dp[0] << '\n';
} 
 
signed main(){
    fastio
    solve();
}
 
/*
avoid endl unless absolutely necessary!
*/