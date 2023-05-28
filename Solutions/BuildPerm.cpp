#include <bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define fastio ios::sync_with_stdio(false);cin.tie(0); 
#define mp make_pair
#define customSort(v, sortbyCond) sort(v.begin(), v.end(), sortbyCond)
#define contSort(n) sort(n.begin(), n.end())
#define sort(n, len) sort(n, n + len)
 
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

const int N = 3*1e5;
int arr[N];

int main(){
    fastio

    int n;
    cin >> n;
    // vi nums(n);

    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    sort(arr, n);
    // printStruct(nums);

    long long res = 0;
    for(int i=0;i<n;i++) {
        // cout << abs(nums[i] - (i+1)) << endl;
        res += abs(arr[i] - (i+1));
    }

    cout << res << endl;

    return 0;
}