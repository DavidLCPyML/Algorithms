#include <bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define ll long long
#define vl vector<ll>
#define fastio ios::sync_with_stdio(false);cin.tie(0); 
#define mp make_pair
#define customSort(v, sortbyCond) sort(v.begin(), v.end(), sortbyCond)
#define contSort(vec) sort(vec.begin(), vec.end())
#define arrsort(n, len) sort(n, n + len)
 
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

    int n;
    cin >> n;
    vi nums(n);

    for(int i=0;i<n;i++) {
        cin >> nums[i];
    }
    int k;
    cin >> k;

    //prefix sum errything.
    vl pref1(n+1);
    vl pref2(n+1);

    for(int i = 1; i <= n; i++) {
        pref1[i] = pref1[i-1] + nums[i-1];
    }
    contSort(nums);
    for(int i = 1; i <= n; i++) {
        pref2[i] = pref2[i-1] + nums[i-1];
    }

    // printStruct(pref1);
    // printStruct(pref2);

    for(int i=0;i<k;i++) {
        int type, l,r;
        cin >> type >> l >> r;
        
        //do shit
        if(type == 1) {
            cout << pref1[r] - pref1[l-1] << endl;
        } else {
            cout << pref2[r] - pref2[l-1] << endl;
        }
    }

    return 0;
}