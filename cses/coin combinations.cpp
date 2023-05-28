#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
//for priority queues
#include <queue>
//for setting double float precision
#include <iomanip>
//for sorting algorithms
#include <algorithm>
 
using namespace std;
 
//void printvec(vector<int> n) {
//    for (int i = 0; i < n.size(); i++) {
//        cout << n[i] << " ";
//    } cout << endl;
//}

int allCoins[101][1000001] = { 0 };
 
int main() {
    int bigMod = 1e9 + 7;
    int n, k;
    cin >> n >> k;
 
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
 
    //there are n coins.
    //row j = possible combinations using the first j coins.
    allCoins[0][0] = 1;
 
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            allCoins[i][j] = allCoins[i - 1][j];
            if (j >= coins[i - 1]) {
                (allCoins[i][j] += allCoins[i][j - coins[i - 1]]) %= bigMod;
            }
            //allCoins[i][j] = ways;
        }
    }
 
 
    cout << allCoins[n][k] << endl;
 
    return 0;
}