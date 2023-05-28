#include <bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define fastio ios::sync_with_stdio(false);cin.tie(0); 
#define mp make_pair
 
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

int main(){
    fastio

    int n;
    cin >>n;
    vi nums(n);

    //numbers of 25s and 50s
    int change[2] = {0};

    for(int i=0;i<n;i++) {
        cin >> nums[i];

        if(nums[i] == 25) {
            change[0]++;
        } else if (nums[i] == 50) {
            if(change[0]) {
                change[0]--;
                change[1]++;
            } else {
                cout << "NO" << endl;
                return 0;
            }
        } else {
            if(change[1] && change[0]) {
                change[0]--, change[1]--;
            } else if(change[0] >= 3) {
                change[0] -= 3;
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    
    cout << "YES" << endl;
    return 0;
}


/*
avoid endl unless absolutely necessary!
*/