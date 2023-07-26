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

    int x, a,b,c;
    cin >>x >> a >> b >> c;

    //ax+by+cz=n - maximize x+y+z
    int max_sum = -1;

    for(int i = 0; i <= x/a; i++) {
        for(int j = 0; j <= (x-a*i)/b; j++) {
            int y = x - a*i - b*j;

            if(y % c == 0) {
                // cout << i << " " << j << " " << y/c << " ";
                max_sum = max(max_sum, i + j + y/c);
                // cout << max_sum << endl;
            }
        }
    }

    cout << max_sum << endl;


    return 0;
}