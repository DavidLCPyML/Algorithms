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
// #define unique(vec) unique(vec.begin(), vec.end());contSort(vec)
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

//THIS is Rabin-Karp algorithm, last one was a trie :oops:
#define some_prime (int)(1e9+7)

int main() {
    string s, s1;
    cin >> s >> s1;
    int k;
    cin >> k;

    vi a(s.size() + 1, 0);
    vl hashes;
    
    //compute prefix sums of "good" chars in str
    for (int i = 1; i <= s.size(); i++) {
        int chasc = s[i - 1] - 'a';
        a[i] = a[i - 1] + (s1[chasc] == '0');
    }
    // printStruct(a);
 
    // rabin-karp rolling hash
    for(int i = 0; i < s.size(); i++){
        ll hash = 0;

        //compute rolling hash from i to end of str
        for(int j = i; j < s.size(); j++){
            if(a[j + 1] - a[i] > k) {
                break;
            }
            //funnily enough, 27 doesn't work here
            hash = (hash * some_prime) + s[j];
            hashes.push_back(hash);
        }
    }
    //sort & remove uniques
    contSort(hashes);
    hashes.erase(unique(hashes.begin(), hashes.end()), hashes.end());
 
    cout << hashes.size() << endl;
    return 0;
}