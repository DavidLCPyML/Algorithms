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

void solve() {
    int a,b,c;
    cin >>a >> b>> c;

    vector<vector<vi>> dp(a+1, vector<vi> (b+1, vi (c+1, 0)));

    // for(int i=1;i<=a;i++) {
    //     dp[i][0][0] = 1;
    // }
    // for(int i=1;i<=b;i++) {
    //     dp[0][i][0] = 1;
    // }
    // for(int i=1;i<=c;i++) {
    //     dp[0][0][i] = 1;
    // }



    for(int i=0;i<=a;i++) {
        for(int j = 0; j <= b; j++) {
            for(int k = 0; k <= c; k++) {
                bool flag = 0;

                for(int x = 1; x <=i; x++) {
                    if(!dp[i-x][j][k]) {
                        dp[i][j][k] = 1;
                    }
                }
                for(int x = 1; x <=j; x++) {
                    if(!dp[i][j-x][k]) {
                        dp[i][j][k] = 1;
                    }
                }
                for(int x = 1; x <=k; x++) {
                    if(!dp[i][j][k-x]) {
                        dp[i][j][k] = 1;
                    }
                }

            }
        }
    }
    
    cout << (dp[a][b][c] ? "Yes" : "No") << endl;
    
    return;
}

signed main() {
    fastio

    // int n;
    // cin >> n;
    // solve(n);

    solve();

    return 0;
}

/*
4 4
1 0.5 1.45 0.75
1.95 1 3.1 1.49
0.67 0.31 1 0.48
1.34 0.64 1.98 1
*/


