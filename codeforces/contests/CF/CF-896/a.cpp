#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
#include <cmath>
#include <map>
#include <queue>
#include <unordered_map>
using namespace std;
 
#define FOR(i, st, n) for (int i = st; i < n; i++)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
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
void printPairVec(vector<pair<T, T2> > n) {
   for (int i = 0; i < n.size(); i++) {
       cout << n[i].first << ", " << n[i].second << endl;
   }
}
template<typename T>
void printNestVec(vector<vector<T> > n) {
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
void printvec(vector<int> n) {
    for (size_t i = 0; i < n.size(); i++) {
        cout << n[i] << " ";
    } cout << endl;
}

bool check(vi &a) {
    int checkval = a[0];
    FOR(i, 0, a.size())
        if (a[i] != checkval)
            return false;
    return true;
}

void solve() {
    int n;
    cin >> n;
    vi a(n);

    FOR(i, 0, n) {
        cin >> a[i];
    }


    // FOR(i, 0, 2) {
    //     int s = a[0];
    //     FOR(i, 1, n) {
    //         s = s ^ a[i];
    //         // cout << s << " ";
    //     }
    //     FOR(i, 0, n) {
    //         a[i] = s;
    //     }
    //     printStruct(a);
    // }
    // // printStruct(a);


    // if(a.size() % 2 == 1) {
    //     int s = a[0];
    //     FOR(i, 1, n-1) {
    //         s = s ^ a[i];
    //     }
    //     FOR(i, 0, n-1) {
    //         a[i] = s;
    //     }
    //     printStruct(a);

    //     FOR(i, 0, 2) {
    //         int s = a[n-1] ^ a[n-2];
    //         a[n-2] = s;
    //         a[n-1] = s;
    //         // cout << 1 << endl;
    //         printStruct(a);
    //     }
    // }


    // printStruct(a);

    if(a.size() % 2 == 0) {
        cout << 2 << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n << endl;
    } else {
        cout << 5 << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n-1 << endl;
        cout << n-1 << " " << n << endl;
        cout << n-1 << " " << n << endl;
    }

    // cout << s << endl;

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