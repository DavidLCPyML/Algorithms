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
 
// ifstream fin("input.txt");
// ofstream fout("output.txt");
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
    
    int n, m;
    cin >> n >> m;

    vi nums(n);
    vi vals(n, 0);
    set<int> s;

    for(int i=0;i<n;i++) {
        cin >> nums[i];
    }

    for(int i = n - 1; i >= 0; i--) {
        // cin >> nums[i];
        s.insert(nums[i]);
        vals[n - 1 - i] = s.size();
    }

    // printStruct(vals);

    for(int i = 0; i < m; i++) {
        int x;
        cin >> x;
        cout << vals[n - x] << endl;
    }


    return 0;
}

/*
avoid endl unless absolutely necessary!
*/