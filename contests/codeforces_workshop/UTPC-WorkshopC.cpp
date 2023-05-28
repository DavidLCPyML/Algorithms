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
    vi stones(n+1, 0);
    vl pref(n+1, 0);

    pref[0] = 0;
    stones[0] = 0;
    for(int i=1;i<=n;i++) {
        cin >> stones[i];
        pref[i] = stones[i] + pref[i-1]; 
    }

    sort(stones.begin(), stones.end());
    vl uvec(n+1, 0);
    uvec[0] = 0;
    for(int i =1; i <= n;i++) {
        uvec[i] = uvec[i-1] + stones[i];
    }

    int m; cin >> m;
    for(int  i= 0; i < m;i++) {
        int type,l,r;
        cin >> type >> l >> r;

        if(type == 1) {
            //psum case
            cout << pref[r] - pref[l-1] << endl;
        } else {
            //minquery case
            cout << uvec[r] - uvec[l-1] << endl;
        }
    }

    // printStruct(pref);

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

    return 0;
}

/*
4 4
1 0.5 1.45 0.75
1.95 1 3.1 1.49
0.67 0.31 1 0.48
1.34 0.64 1.98 1
*/