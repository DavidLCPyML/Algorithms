#include <bits/stdc++.h>
using namespace std;
 
#define FOR(i, st, n) for (int i = st; i < n; i++)
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define fastio ios::sync_with_stdio(false);cin.tie(0); 
#define mp make_pair
#define customSort(v, sortbyCond) std::sort(v.begin(), v.end(), sortbyCond)
#define contSort(n) std::sort(n.begin(), n.end())
#define revSort(n) std::sort(n.rbegin(), n.rend())
#define arrSort(n, len) sort(n, n + len)
#define ll long long int
 
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

struct greater
{
    template<class T>
    bool operator()(T const &a, T const &b) const { return a > b; }
};

void solve() {
    char ttt[3][3];
    FOR(i, 0, 3) {
        FOR(j, 0, 3) {
            cin >> ttt[i][j];
        }
    }

    int cntX = 0, cntO = 0, cntplus = 0;
    // check cols for a win
    FOR(i, 0, 3) {
        cntX = 0, cntO = 0, cntplus = 0;
        FOR(j, 0, 3) {
            if (ttt[i][j] == 'X') cntX++;
            else if (ttt[i][j] == 'O') cntO++;
            else if (ttt[i][j] == '+') cntplus++;
        }
        if (cntX == 3) {
            cout << "X\n";
            return;
        }
        else if (cntO == 3) {
            cout << "O\n";
            return;
        } 
        else if (cntplus == 3) {
            cout << "+\n";
            return;
        }
    }

    // now check rows for a win
    FOR(i, 0, 3) {
        cntX = 0, cntO = 0, cntplus = 0;
        FOR(j, 0, 3) {
            if (ttt[j][i] == 'X') cntX++;
            else if (ttt[j][i] == 'O') cntO++;
            else if (ttt[j][i] == '+') cntplus++;
        }
        if (cntX == 3) {
            cout << "X\n";
            return;
        }
        else if (cntO == 3) {
            cout << "O\n";
            return;
        } 
        else if (cntplus == 3) {
            cout << "+\n";
            return;
        }
    }

    // now check diagonals for a win
    cntX = cntO = cntplus = 0;
    FOR(i, 0, 3) {
        if (ttt[i][i] == 'X') cntX++;
        else if (ttt[i][i] == 'O') cntO++;
        else if (ttt[i][i] == '+') cntplus++;
    }
    if (cntX == 3) {
        cout << "X\n";
        return;
    }
    else if (cntO == 3) {
        cout << "O\n";
        return;
    } 
    else if (cntplus == 3) {
        cout << "+\n";
        return;
    }

    cntX = cntO = cntplus = 0;
    // the other diagonal
    FOR(i, 0, 3) {
        if (ttt[i][2 - i] == 'X') cntX++;
        else if (ttt[i][2 - i] == 'O') cntO++;
        else if (ttt[i][2 - i] == '+') cntplus++;
    }
    if (cntX == 3) {
        cout << "X\n";
        return;
    }
    else if (cntO == 3) {
        cout << "O\n";
        return;
    } 
    else if (cntplus == 3) {
        cout << "+\n";
        return;
    }
    cout << "DRAW\n";
}

int main(){
    fastio

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
