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

void gameysolve(int n, int k){
    int ans = 0;

    //go through each row
    for(int i =1 ;i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << j/i << " ";


            if(j/i == k) ans++;
        }
        cout << endl;
    }
    cout  << ans << endl;
}

void solve(int n , int k) {
    int ans = 0;

    if(k == 0) {
        cout << n * (n-1) / 2 << endl;
        return;
    }

    //go through each row
    for(int i = 1 ;i <= n; i++) {
        //does the value i * k exist (need j = i*k)
        if(i*k <= n) {
            if((i * (k+1) - 1) < n) {
                ans += i;
            } else {
                ans += n - (i*k) + 1;
            }
        }
    }

    cout  << ans << endl;

    return;
}

signed main() {
    fastio

    int n, k;
    cin >> n >> k;

    // gameysolve(n, k);
    
    solve(n, k);

    return 0;
}

/*

*/