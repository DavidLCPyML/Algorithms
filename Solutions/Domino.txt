#include <bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define fastio ios::sync_with_stdio(false);cin.tie(0); 
#define mp make_pair
 
// ifstream fin("input.txt");
// ofstream fout("output.txt");
const int MOD = 1 << 30;

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
    fastio

    int n;
    cin >> n;

    int lsum = 0;
    int rsum = 0;
    int flips = 0;

    for(int i=0;i<n;i++) {
        int x, y;
        cin >> x >> y;

        lsum += x;
        rsum += y;

        if(x % 2 != y%2) {
            flips++;
        }
    }

    if(lsum % 2 == 0 && rsum % 2 == 0) {
        cout << "0\n";
    } else if (!(flips & 1) && flips > 0) {
        cout << "1\n";
    } else {
        cout << "-1\n";
    }

    return 0;
}

/*
avoid endl unless absolutely necessary!
*/