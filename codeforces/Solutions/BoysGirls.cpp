#include <bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define pii pair<int, int>
#define fastio ios::sync_with_stdio(false);cin.tie(0); 
 
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

ifstream fin("input.txt");
ofstream fout("output.txt");

int main() {
    fastio
    
    int n, m;
    fin >> n >> m;

    // cout << n << m << endl;
    if(n <= m) {
        for(int i=0;i<n;i++) {
            fout << "GB";
        }
        for(int i = n; i < m; i++) {
            fout << 'G';
        }
        fout << endl;
    } else {
        for(int i=0;i<m;i++) {
            fout << "BG";
        }
        for(int i = m; i < n; i++) {
            fout << 'B';
        }
        fout << endl;
    }

    return 0;
}

/*
3
123456
YES
4
12934596
NO
*/