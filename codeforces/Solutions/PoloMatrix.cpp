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

void solve(int n) {
    return;
}

signed main() {
    fastio

    int n,m,k;
    cin >> n >> m >> k;

    vi nums(n*m, 0);
    
    for(int i = 0; i < n * m; i++) {
        cin >> nums[i];
    }
    contSort(nums);

    //distance < d means that we can't subtract d to get this value ever.
    int ans = abs(nums[0] - nums[(n*m)/2]) / k;
    for(int i = 0; i < nums.size() - 1; i++) {
        if((nums[i+1] - nums[i]) % k != 0) {
            cout << -1 << endl;
            return 0;
        } else {
            ans += abs(nums[i+1] - nums[(n*m)/2]) / k;
        }
    }

    cout << ans << endl;
    return 0;
}

/*

*/