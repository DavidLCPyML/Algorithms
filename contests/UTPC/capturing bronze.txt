#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>

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
 
bool good(int n) {
    while(n > 9) {
        int val = 0;

        while(n > 0) {
            val += (n%10)*(n%10);
            n /= 10;
            // cout << val << endl;
        }

        n = val;
    }
    // cout << endl;
    return n == 1 || n == 7;
}

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    for(int i=1;i<=n;i++) {
        if(good(i)) {
            cnt++;
        }
    }

    cout << cnt << endl;


    return 0;
}