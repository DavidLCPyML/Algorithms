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
#define M_PI       3.14159265358979323846
// #define _USE_MATH_DEFINES
 
ifstream fin("input.txt");
ofstream fout("output.txt");
const int MOD = 1e9 + 7;
 
template<class C>
void printStruct(C &n) {
   for (auto i: n) {
       cout << i << " ";
   } cout << endl;
}
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

void solve(int n) {
    vi nums(n, 0);
    ll res = 0;

    int odd_n = 0, even_n = 1, nn = 0;
    for(int i=0; i < n; i++) {
        cin >> nums[i];
        if(nums[i] < 0) nn++;

        if(nn % 2 == 0) {
            res += even_n;
            even_n++;
        } else {
            res += odd_n;
            odd_n++;
        }
    }

    ll total = n * (n+1) /2;
    cout << total-res << " " << res << endl;

    return;
}

signed main() {
    fastio

    // int n, k;
    // cin >> n >> k;


    // solve(n, k);

    int n;
    cin >> n;
    solve(n);

    // int t; cin >> t;
    // while(t--) {
    //     solve();
    // }

    return 0;
}

/*
4 4
1 0.5 1.45 0.75
1.95 1 3.1 1.49
0.67 0.31 1 0.48
1.34 0.64 1.98 1
*/