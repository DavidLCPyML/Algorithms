#include <bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define fastio ios::sync_with_stdio(false);cin.tie(0); 
#define mp make_pair
#define customSort(v) sort(v.begin(), v.end(), sortbyCond)
 
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

int main(){
    fastio

    int n, k;
    cin >> n >> k;
    vpii scores(n);

    for(int i=0;i<n;i++) {
        cin>> scores[i].first >> scores[i].second;
    }

    customSort(scores);

    // cout << (scores[forward+1] == scores[k]) << endl;
    // cout << (scores[backward-1] == scores[k]) << endl;

    pii tgt = scores[k-1];
    int i = k-1;
    int j = k-1;

    while(i < n && scores[i] == tgt)
        if(scores[i] == tgt)
            i++;

    while(j >= 0 && scores[j] == tgt)
        if(scores[j] == tgt)
            j--;
    
    // cout << i << " " << j << endl;
    cout << i-j-1 << endl;

    // printPairVec(scores);

    return 0;
}


/*
avoid endl unless absolutely necessary!
*/