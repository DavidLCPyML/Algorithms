#include <bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define vd vector<double>
#define pii pair<int, int>
#define pdd pair<double, double>
#define vpdd vector<pdd>
#define vpii vector<pii>
#define ll long long
#define vl vector<ll>
#define fastio ios::sync_with_stdio(false);cin.tie(0); 
#define mp make_pair
#define customSort(v, sortbyCond) sort(v.begin(), v.end(), sortbyCond)
#define contSort(vec) sort(vec.begin(), vec.end())
#define arrsort(n, len) sort(n, n + len)
 
ifstream fin("input.txt");
ofstream fout("output.txt");
const int MOD = 1e9 + 7;
 
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

bool checkDiag(char s_c, char e_c, int s_r, int e_r) {
    return abs(s_c - e_c) == abs(s_r - e_r);
}

pair<char, int> findMid(char s_c, char e_c, int s_r, int e_r) {
    int col = s_c - 'A';
    int new_r;
    for(int i=0;i<8;i++) {
        if(i <= col) {
            new_r = s_r + (col - i);
            // if(new_r <= 8) {
            //     cout << (char)('A' + i) << " " << new_r << endl;
            // }
        } else {
            new_r = s_r + (i - col);
            // if(new_r <= 8) {
            //     cout << (char)('A' + i) << " " << new_r << endl;
            // }
        }
        if(checkDiag((char)('A' + i), e_c, new_r, e_r) && new_r <= 8) {
            return make_pair((char)('A' + i), new_r);
        }
    }

    for(int i=0;i<8;i++) {
        if(i <= col) {
            new_r = s_r - (col - i);
            // if(new_r > 0) {
            //     cout << (char)('A' + i) << " " << new_r << endl;
            // }
        } else {
            new_r = s_r - (i - col);
            // if(new_r > 0) {
            //     cout << (char)('A' + i) << " " << new_r << endl;
            // }
        }
        if(checkDiag((char)('A' + i), e_c, new_r, e_r) && new_r > 0) {
            return make_pair((char)('A' + i), new_r);
        }
    }

    //start from start
    
    
    
    //don't think this should happen, but...
    return make_pair('Z', -1);
}

void solve() {
    char s_c,e_c;
    int s_r, e_r;
    cin >> s_c >> s_r;
    cin >> e_c >> e_r;
    
    int diff = abs(s_c - e_c) - abs(s_r - e_r);
    // cout  << "Diff: "<< diff << endl;

    if(diff % 2 != 0) {
        cout << "Impossible" << endl;
    } else {
        if(s_c == e_c && s_r == e_r) {
            cout << "0 " << s_c << " " << s_r << "\n";
        } else if (checkDiag(s_c, e_c, s_r, e_r) == true) {
            cout << "1 "  << s_c << " " << s_r << " " << e_c << " " << e_r << "\n";
            // are on same diagonal(s), 1 move reachable
        } else {
            // we only need 2 moves to reach end point.
            // cout << "I can reach but idk lol" << endl;

            //keep going until slope is 1?
            // double slope = (double) abs(s_r - e_r) / (double) abs(s_c - e_c);
            // cout << "slope = " << slope << endl;
            cout << "2 " << s_c << " " << s_r << " ";
            // cout << endl;
            pair<char, int> res = findMid(s_c, e_c, s_r, e_r);
            // findMid(s_c, e_c, s_r, e_r);
            cout << res.first << " " << res.second << " " << e_c << " " << e_r << endl;
        }
    }

}

signed main() {
    fastio
    
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    // cout << (abs('A' - 'F') == abs(3 - 8)) << endl;

    return 0;
}

//test cases
/*
4
E 2 E 3
F 1 E 8
A 3 A 3
A 3 F 8

*/