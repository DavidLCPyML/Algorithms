#include <bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define pii pair<int, int>
#define fastio ios::sync_with_stdio(false);cin.tie(0); 
#define mp make_pair
 
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

// ifstream fin("input.txt");
// ofstream fout("output.txt");
// const int MOD = 1 << 30;

int main() {
    fastio
    
    int n;
    cin >> n;

    int cnt = 0;
    for(int a = 1; a <= n; a++) {
        for(int b = a; b <= n; b++) {
            int sum = a*a + b*b;
            int hyp = sqrt(sum);

            if(hyp*hyp == sum && hyp <= n) {
                // cout << a << " " << b << " " << hyp << endl;
                cnt++;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}

/*

*/