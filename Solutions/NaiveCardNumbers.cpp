#include <bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define fastio ios::sync_with_stdio(false);cin.tie(0); 
#define mp make_pair
 
ifstream fin("input.txt");
ofstream fout("output.txt");
// const int MOD = 1 << 30;

template<typename T, typename T2>
void printPairVec(vector<pair<T, T2>> n) {
   for (int i = 0; i < n.size(); i++) {
       fout << n[i].first << " " << n[i].second << endl;
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
    fin >> n;

    vpii nodes(2*n);
    for(int i = 0; i < nodes.size(); i++) {
        fin >> nodes[i].first;
        nodes[i].second = i+1;
    }

    sort(nodes.begin(), nodes.end());
    // printPairVec(nodes);

    //partition into 2 sets
    vpii ans;
    for(int i = 0; i < nodes.size() - 1; i += 2) {
        // cout << nodes[i].first << " " << nodes[i+1].first << ": ";
        if(nodes[i].first != nodes[i + 1].first) {
            // cout << "no pair for these numbers!" << endl;
            fout << "-1" << endl;
            return 0;
        } else {
            // cout << "pair found!" << endl;
            ans.push_back(mp(nodes[i].second, nodes[i+1].second));
        }
    }

    printPairVec(ans);

    return 0;
}

/*

*/