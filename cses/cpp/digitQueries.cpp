#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
#include <cmath>
#include <bitset>
#include <functional>
using namespace std;
 
#define FOR(i, st, n) for (int i = st; i < n; i++)
#define vi vector<int>
#define vll vector<ll>
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
void printvec(vector<int> n) {
    for (size_t i = 0; i < n.size(); i++) {
        cout << n[i] << " ";
    } cout << endl;
}

ll closestpartition(ll i, ll set1, ll set2, vll &nums) {
    if (i == nums.size())
        return abs(set1 - set2);
    return min(closestpartition(i+1, set1 + nums[i], set2, nums), closestpartition(i+1, set1, set2 + nums[i], nums));
}

void solve() {
    ll k;
    cin >> k;

    ll base = 9, ind = 1;
    while (k > base * ind) {
        k -= base * ind;
        base *= 10;
        ind++;
    }

    ll index = (k - 1) % ind;
    ll offset = (k - 1) / ind;
    ll start = pow(10, ind - 1);
    cout << to_string(start + offset)[index] - '0' << endl;
}

 
int main() {
    fastio

    int t;
    // t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
 
    return 0;
}