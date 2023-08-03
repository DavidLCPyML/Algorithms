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
template<class C>
void printStruct(C &n) {
   for (auto i: n) {
       cout << i << " ";
   } cout << endl;
}

long long gcd(long long a, long long b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void solve(long long n) {
    if(n == 1) {
        cout << "0\n";
        return;
    }

    if(n % 2 == 0) {
        cout << "2 ";

        int cnt = 0;
        while(n % 2 == 0) {
            n /= 2;
            cnt++;
        }
        cout << cnt << "\n";
    }

    for(int i = 3; i <= sqrt(n); i += 2) {
        if(n % i == 0) {
            cout << i << " ";
            int cnt = 0;
            while(n % i == 0) {
                cnt++;
                n /= i;
            }
            cout << cnt << "\n";
        }
    }

    if(n > 2) {
        cout << n << " 1\n";
    }

    cout << "0\n";
}

signed main() {
    fastio

    int t;
    cin >> t;
    while(t--) {
        long long x,y;
        cin >> x >> y;

        long long g = gcd(x,y);

        solve(g);
    }

    return 0;
}

/*

*/