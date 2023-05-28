#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>

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

double calc (double mid, vpii bodies) {
    // cout << "mid is " << mid << " ";
    double sum = 0.0;
    for(int i=0;i<bodies.size(); i++) {
        if(mid > bodies[i].first) {
            double dist = mid - bodies[i].first;
            sum -= (9.8*bodies[i].second) / (dist*dist);
            // cout << "force is " << force  << endl;
            // sum -= force;
        } else {
            double dist = bodies[i].first - mid;
            sum += (9.8*bodies[i].second) / (dist*dist);
        }
        // cout << sum << endl;
        // sum += force; 
    }
    // cout << sum << endl;
    return sum;
}

double bsearch(double start, double end, vpii bodies) {
    double mid =  start + (end - start) / 2.0;
    double val = calc(mid, bodies);

    while(abs(val) > 1e-6) {
        if(val < 0) {
            start = mid;
        } else if (val > 0) {
            end = mid;
        }
        mid = start + (end - start) / 2.0;
        val = calc(mid, bodies);
    }

    return mid;
}

int main() {
    int n;
    cin >> n;

    vpii bodies(n);
    for(int i=0;i<n; i++) {
        cin >> bodies[i].first >> bodies[i].second;
    }
    sort(bodies.begin(), bodies.end());

    for(int i=0;i<n-1;i++) {
        printf("%.7f\n", bsearch(bodies[i].first, bodies[i+1].first, bodies));
        // cout << bsearch(bodies[i].first, bodies[i+1].first, bodies) << endl;
    }

    return 0;
}