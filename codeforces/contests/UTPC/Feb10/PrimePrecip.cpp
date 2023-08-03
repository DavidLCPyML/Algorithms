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

#define MAX (int) (4e6 + 1)
bool v[MAX];
int len, sp[MAX];

//return total no. of prime factors
int findFacts(int n) {
    int facts = 0;
    while(n > 1) {
        // cout << sp[n] << " ";
        facts++;
        n /= sp[n];
    }
    return facts;
}


void solve(ll n) {
    vi nums(n+1, 0);
    ll ans = 0;

    for(int i=2;i <= n; i++) {        
        nums[i] = nums[i - findFacts(i)] + 1;
        ans += nums[i];
    }

    // printStruct(nums);

    cout << ans << endl;
    return;
}

//compute prime factors
void Sieve(){
	for (int i = 2; i < MAX; i += 2)	
        sp[i] = 2; //even numbers have smallest prime factor 2
	for (ll i = 3; i < MAX; i += 2){
		if (!v[i]){
			sp[i] = i;
			for (ll j = i; (j*i) < MAX; j += 2){
				if (!v[j*i])	v[j*i] = true, sp[j*i] = i;
			}
		}
	}
}

signed main() {
    fastio

    Sieve();

    int h;
    cin >> h;

    solve(h);
    

    return 0;
}

/*

*/