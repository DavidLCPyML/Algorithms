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

    int n, m;
    cin >> n >> m;

    vi shakes(n, 0);
    for(int i=0;i<n;i++) {
        cin >> shakes[i];
    }

    // printStruct(shakes);

    long long cost = (m * (m+1)) / 2;
    // cout << cost << endl;
    int acc = 0;
    int ipos = 0;
    long long sum = 0;
    while(ipos < shakes.size()) {
        if(sum < cost) {
            sum += shakes[ipos];
            ipos++;
        } else {
            sum = 0;
            acc++;
            cost += (m * m);
        }
    }

    if(sum >= cost) {
        acc++;
    }

    cout << acc<< endl;


    return 0;
}

/*

*/