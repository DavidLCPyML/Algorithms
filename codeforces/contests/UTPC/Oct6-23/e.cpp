#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
#include <cmath>
#include <map>
#include <queue>
#include <climits>
#include <unordered_map>
using namespace std;
 
#define FOR(i, st, n) for (int i = st; i < n; i++)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpii vector<pii>
#define vpll vector<pll>
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

template <typename T> std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec) {
    for (auto i: vec) {
        os << i << " ";
    }
    return os;
}
template <typename T1, typename T2> std::ostream& operator<<(std::ostream& os, const std::pair<T1, T2>& p) {
    os << p.first << " " << p.second;
    return os;
}
template<typename T> void printVec(vector<T> n) {
    for (int i = 0; i < n.size(); i++) {
        cout << n[i] << endl;
    }
}
template <typename T1, typename T2> bool sortbyCond(const pair<T1, T2>& a,
                const pair<T1, T2>& b) {
    if (a.first != b.first)
        return (a.first > b.first);
    else
       return (a.second > b.second);
}
struct greater
{
    template<class T>
    bool operator()(T const &a, T const &b) const { return a > b; }
};

ll rotSortChk(vll &v, ll n) { 
    ll first_drop = -1;
    FOR(i, 0, n - 1) {
        if (v[i] > v[i + 1]) {
            first_drop = i;
            break;
        }
    }

    if (first_drop == -1) return 0;

    FOR(i, first_drop + 1, n - 1) {
        if (v[i] > v[i + 1]) {
            return -1;
        }
    }

    if (v[n - 1] > v[0]) {
        return -1;
    }

    return first_drop + 1;
} 

void solve() {
    ll n;
    cin >> n;

    vector<vll> ciphers(n);
    FOR(i, 0, n) {
        ll len;
        cin >> len;
        FOR(j, 0, len) {
            ll temp;
            cin >> temp;
            ciphers[i].push_back(temp);
        }
    }

    // cout << ciphers << endl;

    vll rotations(n, -1LL);
    ll num_neg = 0;
    FOR(i, 0, n) {
        rotations[i] = rotSortChk(ciphers[i], ciphers[i].size());
        num_neg += (rotations[i] == -1);
    }

    // cout << rotations << endl;

    map<ll, ll> nums;
    FOR(i, 0, n) {
        if (rotations[i] != -1) {
            nums[rotations[i]]++;
        }
    }

    ll ans = 0;
    ll rotatable_left = num_neg;
    ll left = 0;
    // upon making a pair we are done with those two
    for (auto i: nums) {
        // if (i.second > 1) {
            if (i.second % 2 == 0) {
                ans += i.second;
            } else if (rotatable_left > 0) {
                ans += i.second;
                rotatable_left--;
            } else {
                ans += i.second - 1;
                left++;
            }
        // }

        // cout << i.first << " " << i.second << endl;
        // cout << ans << endl;
    }

    // cout << left << endl;

    // how many rotatable left that can be paired with the ones that are not rotatable
    // ans += rotatable_left;
    ans += (left / 2);
    cout << ans << endl;

    return;
}

 
int main() {
    fastio

    int t;
    t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
 
    return 0;
}