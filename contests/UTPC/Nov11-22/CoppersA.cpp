#include <bits/stdc++.h>
using namespace std;

template<typename T, typename T2>
void printPairVec(vector<pair<T, T2>> n) {
   for (int i = 0; i < n.size(); i++) {
       cout << n[i].first << ", " << n[i].second << endl;
   }
}

template<typename T>
void printNestVec(vector<vector<T>> n) {
   for (int i = 0; i < n.size(); i++) {
       for (int j = 0; j < n[i].size(); j++) {
           cout << n[i][j] << " ";
       } cout << endl;
   }
}

template<typename T>
void printVec(vector<T> n) {
   for (int i = 0; i < n.size(); i++) {
       cout << n[i] << " ";
   } cout << endl;
}

template<class C>
void printStruct(C &n) {
   for (auto i: n) {
       cout << i << " ";
   } cout << endl;
}
 
int main() {
	int n;
    cin >> n;

    if(n == 1) {
        int res;
        cin >> res;
        cout << res << endl;
        return 0;
    }

    vector<vector<int>> sheet(n, vector<int> (n, 0));
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> sheet[i][j];
        }
    }

    // printNestVec(sheet);

    cout << sheet[0][0] + sheet[n-1][n-1] + sheet[n-1][0] + sheet[0][n-1] << endl;
    
    return 0;
}
 
/*
 
3 100
Squidward 5 10
$GME 100 99
PinkPrincess 1000 1000
 
1 100
PinkPrincess 1000 1000
 
4 100
Squidward 5 10
$GME 100 99
PinkPrincess 1000 1000
BigJoe11 50 100
*/