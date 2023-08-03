#include <bits/stdc++.h>
using namespace std;

int n, m;
long long adj[501][501], oadj[501][501];
long long flow[501];
bool V[501];
int pa[501];

bool reachable() {
  memset(V, false, sizeof(V));
  queue<int> Q;
  Q.push(1);
  V[1] = 1;
  while (!Q.empty()) {
    int i = Q.front();
    Q.pop();
    for (int j = 1; j <= n; j++) {
      if (adj[i][j] && !V[j]) {
        V[j] = 1;
        pa[j] = i;
        Q.push(j);
      }
    }
  }
  return V[n];
}

int main() {
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      adj[i][j] = 0;
    }
  }

  for (int i = 0; i < m; i++) {
    long long a, b, c;
    cin >> a >> b >> c;
    adj[a][b] += c;
  }

  int v, u;
  long long maxflow = 0;
  while (reachable()) {
    long long flow = 1e18;
    for (v = n; v != 1; v = pa[v]) {
      u = pa[v];
      flow = min(flow, adj[u][v]);
    }
    maxflow += flow;
    for (v = n; v != 1; v = pa[v]) {
      u = pa[v];
      adj[u][v] -= flow;
      adj[v][u] += flow;
    }
  }
  cout << maxflow << endl;
}