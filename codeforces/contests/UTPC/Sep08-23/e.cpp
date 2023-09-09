#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
#include <cmath>
#include <map>
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

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

bool check(vi &deck) {
    // check if 1 appears 4 times in first 26 cards
    int count = 0;
    FOR(i, 0, 26) {
        if (deck[i] == 1) {
            count++;
        }
    }
    return count == 4;
}

bool visited(vi &deck, vi &start) {
    FOR(i, 0, 52) {
        if (deck[i] != start[i]) {
            return false;
        }
    }
    return true;
}

void shuffle(vi &deck) {
    vi temp(52);
    FOR(i, 0, 26) {
        temp[2 * i] = deck[i];
        temp[2 * i + 1] = deck[i + 26];
    }
    FOR(i, 0, 52)
        deck[i] = temp[i];
}

void solve() {
    vi deck(52);
    FOR(i, 0, 52) {
        cin >> deck[i];
    }
    vi start(52);
    FOR(i, 0, 52) {
        start[i] = deck[i];
    }

    shuffle(deck);
    while (!check(deck) && !visited(deck, start)) {
        shuffle(deck);
    }

    cout << (check(deck) ? "YES" : "NO") << endl;
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