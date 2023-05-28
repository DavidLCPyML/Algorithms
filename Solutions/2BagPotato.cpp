#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

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
 

int main() {
	int y,k,n;
    cin >> y >> k >> n;

    long long int start = ((n/k) * k) - y;
    if(start <= 0) {
        cout << -1 << endl;
        return 0;
    }

    int begin = (start % k == 0) ? k : start % k;
    for(int i=begin;i<=start;i+=k) {
        cout << i << " ";
    }    
    return 0;
}
 
/*
 Tests

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