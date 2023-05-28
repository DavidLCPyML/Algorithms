#include <bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define fastio ios::sync_with_stdio(false);cin.tie(0); 
#define mp make_pair
#define customSort(v) sort(v.begin(), v.end(), sortbyCond)
 
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

int main(){
    fastio

    bool in[4][4];
    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            char c;
            cin >> c;
            in[i][j] = c=='#';
        }
    }
    for(int i=1;i<4;i++) {
        for(int j=1;j<4;j++) {
            int ans = in[i][j] + in[i-1][j-1] + in[i][j-1] + in[i-1][j];
            
            if(ans != 2) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}