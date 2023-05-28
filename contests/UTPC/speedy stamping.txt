#include <bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define vd vector<double>
#define pii pair<int, int>
#define pdd pair<double, double>
#define vpdd vector<pdd>
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

signed main() {
    fastio

    string s;
    cin >> s;

    vi ways(s.length() + 1, 0);
    // printStruct(ways);

    ways[0] = 1;
    ways[1] = 1;

    for(int i=2;i<=s.length();i++) {
        // cout << s[i] << " ";
        //if prev string was T, and curr string is C, we have 2 ways
        if(s[i-1] == 'C') {
            ways[i] = (ways[i-1] + ways[i-2]) % MOD;
        } else {
            ways[i] = ways[i-1];
        }
        //if prev string was C, curr string is C, we have 2 ways as well.
    }

    // printStruct(ways);

    cout << ways[s.length()] << endl;

    return 0;
}

/*

*/