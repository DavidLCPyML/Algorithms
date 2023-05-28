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

bool s_less(string s1, string s2) {
    int n = s1.length();
    for(int i=0;i<n;i++) {
        if(s1[i] <= s2[i]) {
            return false;
        }
    }
    return true;
}

// ifstream fin("input.txt");
// ofstream fout("output.txt");

const int MOD = 1 << 30;

int divs(int n) {
    int total_divs = 1;
    int divs = 0;
    while(n % 2 == 0) {
        n /= 2;
        divs++;
    }
    if(divs) {
        total_divs = (total_divs * (divs+1));
    }

    int x = 3;
    divs = 0;
    while(n > 1) {
        if(n % x == 0) {
            while (n % x == 0) {
                n /= x;
                divs++;
            }
            total_divs = (total_divs * (divs+1));
            divs = 0;
        }
        x+=2;
    }
    return total_divs;
}

int main() {
    fastio
    
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> arr (a*b*c + 1);
    int ans = 0;

    for(int i = 1; i <= a; i++) {
        for(int j = 1; j <= b; j++) {
            for(int k = 1; k <= c; k++) {
                int prod = i*j*k;

                // memoize for small speedup
                if(arr[prod] == 0) arr[prod] = divs(prod);
                ans = (ans + arr[prod]) % MOD;
                // cout << prod << " " << res << " " << ans << endl;
            }
        }
    }
    cout << ans << endl;

    return 0;
}

/*

*/