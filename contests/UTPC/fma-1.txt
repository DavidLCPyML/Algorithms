#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>

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

int main() {
    int n;
    cin >> n;

    if(n == 1) {
        string s;
        cin >> s;
        cout << s.length() << endl;
    } else {
        //n==2
        string s1, s2;
        cin >> s1 >> s2;

        if(s1.find(s2) != string::npos) {
            cout << s1.length() << endl;
        } else if(s2.find(s1) != string::npos) {
            cout << s2.length() << endl;
        } else {
            //brute force largest pref-suf
            int maxLen = -1;
            int start = 0;
            int end = min(s1.length(), s2.length());

            while (start < end) {
                string s2_sub = s2.substr(s2.length() - start, s2.length());
                string s1_sub = s1.substr(0, start);

                if(s1_sub == s2_sub) {
                    maxLen = max(maxLen, (int)s1_sub.size());
                }
                start++;
            }
            start = 0;
            while (start < end) {
                string s1_sub = s1.substr(s1.length() - start, s1.length());
                string s2_sub = s2.substr(0, start);

                if(s1_sub == s2_sub) {
                    maxLen = max(maxLen, (int)s1_sub.size());
                }
                start++;
            }

            cout << s1.length() + s2.length() - maxLen << endl;
        }
    }
}