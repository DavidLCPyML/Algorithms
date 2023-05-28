#include <bits/stdc++.h>
using namespace std;
 
void solve(){
	int n, wc, hc;
	cin >> n >> wc >> hc;
 
	vector<pair<pair<int,int>,int>> chain;
 
	for(int i = 0; i<n ; i++){
		int w,h;
		cin >> w >> h;
 
		if(w > wc && h > hc) {
      chain.push_back(make_pair(make_pair(w,h),i+1));
    }
	}
 
	sort(chain.begin(), chain.end());
 
	vector<int> dp(n+1,1);
	vector<int> prev(n+1,-1);
	int max = 0;
	int ptr;
	for(int i = 0 ; i<chain.size() ; i++){
		for(int j = i-1 ; j>=0 ; j--){
			if(chain[i].first.first > chain[j].first.first && chain[i].first.second > chain[j].first.second && dp[j] + 1 > dp[i]){
				dp[i] = dp[j] + 1;
				prev[i] = j;
			}
		}
		if(dp[i] > max){
			max = dp[i];
			ptr = i;
		}
	}
 
	cout<< max << endl;
 
	vector<int> ans;
 
	while(max && ptr!=-1){
		ans.push_back(chain[ptr].second);
		ptr = prev[ptr];
	}
 
	reverse(ans.begin(), ans.end());
 
	for(int x : ans) {
    cout << x << " ";
  }
 
}
 
int main(){
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  solve();
	
	return 0;
}