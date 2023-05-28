#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e7;
int n;
vector<bool> sieve(MAX, true); 

int main() {
    // int n;
    cin >> n;
    
    for(int i=3;i*i <= MAX; i+=2) {
        if(sieve[i]) {
            for(int j = i*i;j<MAX;j+=2*i) {
                sieve[j] = false;
            }
        }
    }

    // 2 3 5 7 11 13 17
    cout << 2 << " ";
    n--;
    int pos = 3;
    while(n > 0) {
        if(sieve[pos]) {
            cout << pos << " ";
            n--;
        }
        pos += 2;
    } cout << endl;

    return 0;
}