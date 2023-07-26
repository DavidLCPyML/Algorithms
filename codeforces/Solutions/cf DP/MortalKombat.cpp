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
    int tot = 0;
    for(int i=0;i<n;i++){
        cin >> nums[i];
        tot+=nums[i];
    }

    // printStruct(nums);
    int ans = (nums[0] == 1);
    for (int i = 1; i < n; i++) {
        if (nums[i] != 0) {
            
            int j = i;
            while (j < n && nums[j] == 1) {
                j++;
            }
            
            ans += (j - i) / 3;
            i = j - 1;
        }
    }

    cout << ans << endl;

    return;
}

signed main() {
    fastio

    int t;
    cin >> t;
    while(t--) {

    int n;
    cin >> n;
    solve(n);

    }


    // solve();

    return 0;
}

/*



*/


