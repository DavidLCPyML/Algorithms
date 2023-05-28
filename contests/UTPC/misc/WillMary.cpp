// #include <bits.stdc++.h>
#include <algorithm>
#include <climits>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string in;
  getline(cin, in);

  string temp;
  stringstream iss(in);

  int maxOdd = -1;
  int minEven = INT_MAX - 1;

  while (iss >> temp) {
    int i = stoi(temp);
    if (i % 2)
      maxOdd = max(i, maxOdd);
    else
      minEven = min(minEven, i);

    // cout << maxOdd << " " << minEven << " " << endl;
  }

  if (maxOdd == -1 || minEven == (INT_MAX - 1))
    cout << "None" << endl;
  else
    cout << abs(minEven - maxOdd);
  return 0;
}