#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string res = "";
    bool zeros = false;
    for(char c: s) {
        if(c == '0' && !zeros) {
            zeros = true;
        }else {
            res+=c;
        }
    }
    if(!zeros) res.pop_back();
    std::cout << res << endl;

    return 0;
}