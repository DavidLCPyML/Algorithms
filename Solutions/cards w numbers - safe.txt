#include <bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define fastio ios::sync_with_stdio(false);cin.tie(0); 
#define mp make_pair
 
// ifstream fin("input.txt");
// ofstream fout("output.txt");
// const int MOD = 1 << 30;
vi arr[5001];
 
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
 
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    fastio
 
    int n;
    cin >> n;
    for(int i = 0; i < 2*n; i++) {
        int x;
        cin >> x;
 
        arr[x].push_back(i+1);
    }
 
    //partition
    for(int i = 0; i < 5001; i++) {
        if(arr[i].size() % 2) {
            cout << "-1" << endl;
            return 0;
        }
    }
    for(int i = 0; i < 5001; i++) {
        if(arr[i].size() == 0) continue;
        for(int j = 0; j < arr[i].size(); j += 2) {
            cout << arr[i][j] << " " << arr[i][j + 1] << '\n';
        }
    }
 
    return 0;
}
 
/*
 
*/