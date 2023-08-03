#include <bits/stdc++.h>
using namespace std;
 
#define FOR(i, st, n) for (int i = st; i < n; i++)
#define FORS(i, st, n, step) for (int i = st; i < n; i+= step)
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define fastio ios::sync_with_stdio(false);cin.tie(0); 
#define mp make_pair
#define customSort(v, sortbyCond) std::sort(v.begin(), v.end(), sortbyCond)
#define contSort(n) std::sort(n.begin(), n.end())
#define revSort(n) std::sort(n.rbegin(), n.rend())
#define arrSort(n, len) sort(n, n + len)
#define ll long long int
 
// ifstream fin("input.txt");
// ofstream fout("output.txt");
const int MOD = 1e9 + 7;

template<typename T, typename T2>
void printPairVec(vector<pair<T, T2>> n) {
   for (int i = 0; i < n.size(); i++) {
       cout << n[i].first << ", " << n[i].second << endl;
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
bool sortbyCond(const pair<int, int>& a,
                const pair<int, int>& b) {
    if (a.first != b.first)
        return (a.first > b.first);
    else
       return (a.second < b.second);
}

struct greater
{
    template<class T>
    bool operator()(T const &a, T const &b) const { return a > b; }
};

void solve() {
    int n, c;
    cin >> n >> c;

    vi nums(n, 0);

    FOR(i, 0, n) {
        cin >> nums[i];
    }

    ll mn = LLONG_MAX;
    vi tmp = nums;
    while(next_permutation(tmp.begin(), tmp.end())) {
        ll sum = 0;
        FOR(i, 0, n-1) {
            sum += abs(tmp[i+1] - tmp[i] - c);
        }

        mn = min(mn, (ll)sum);
    }
    
    // cout << mx << endl;
    tmp = nums;
    ll sum = 0;

    while(sum != mn) {
        FOR(i, 0, n-1) {
            sum += abs(tmp[i] - tmp[i + 1] - c);
        }

        if(sum == mn) {
            printStruct(tmp);
            return;
        }
    }

    return;
}

int main(){
    fastio

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
