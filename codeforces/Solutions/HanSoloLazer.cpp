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

vpdd dists;
signed main() {
    fastio
    vd matches;
	int n, x, y, z = 0;
	cin >> n >> x >> y;


	for (int i = 0; i < n; i++)  {
        int a,b;
        cin >> a >> b;
        a -= x, b -= y;
        dists.push_back(make_pair(a,b));
    }
	for (int i = 0; i < n; i++) {
		if (!dists[i].first) {
			z++;
        } else {
			double k = (double)dists[i].second / (double)dists[i].first;
			matches.push_back(k);	
		}
	}

    int res = 0;
	if (z != 0)
		res++;
	if (matches.size() == 0) {
		cout << res << endl;
		return 0;
	}
	
    sort(matches.begin(), matches.end());
	matches.erase(unique(matches.begin(), matches.end()), matches.end());
	cout << res + matches.size() << endl;
}

/*
avoid endl unless absolutely necessary!
*/