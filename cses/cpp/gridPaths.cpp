#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
#include <cmath>
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

bool visited[9][9] = {false};
pii dir[4] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

int getpaths(int r, int c, int idx, int paths[]) {
	if ((visited[r][c - 1] && visited[r][c + 1]) &&
	    (!visited[r - 1][c] && !visited[r + 1][c]))
		return 0;
	if ((visited[r - 1][c] && visited[r + 1][c]) &&
	    (!visited[r][c - 1] && !visited[r][c + 1]))
		return 0;
	if (r == 7 && c == 1) {
		if (idx == 48) return 1;
		return 0;
	}
	if (idx == 48) return 0;

	int ret = 0;
	visited[r][c] = true;
	if (paths[idx] < 4) {
		int nxtR = r + dir[paths[idx]].first;
		int nxtC = c + dir[paths[idx]].second;
		if (!visited[nxtR][nxtC]) 
            ret += getpaths(nxtR, nxtC, idx + 1, paths);
	} else {
		for (int i = 0; i < 4; i++) {
			int nxtR = r + dir[i].first;
			int nxtC = c + dir[i].second;
			if (!visited[nxtR][nxtC]) 
    			ret += getpaths(nxtR, nxtC, idx + 1, paths);
		}
	}

	visited[r][c] = false;
	return ret;
}

void solve() {
    string input;
    cin >> input;

    int paths[49] = {0};
    FOR(i, 0, input.size()){
        if (input[i] == 'U') paths[i] = 0;
        else if (input[i] == 'R') paths[i] = 1;
        else if (input[i] == 'D') paths[i] = 2;
        else if (input[i] == 'L') paths[i] = 3;
        else paths[i] = 4;
    }
    
    FOR(i, 0, 9) {
        visited[0][i] = true;
        visited[8][i] = true;
        visited[i][0] = true;
        visited[i][8] = true;
    }

    cout << getpaths(1, 1, 0, paths) << endl;
    
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