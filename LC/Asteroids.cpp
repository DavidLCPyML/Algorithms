#include <vector>
#include <stack>
#include <iostream>
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
    vector<int> stk;
    for(auto i : asteroids) {
        if(i > 0 || stk.empty())
            stk.push_back(i);
        else {
            while(!stk.empty() && stk[stk.size()-1] > 0 && stk[stk.size()-1] < abs(i))
                stk.pop_back();
            if(!stk.empty() && stk[stk.size()-1] == abs(i))
                stk.pop_back();
            else if (stk.empty() || stk[stk.size()-1] < 0)
                stk.push_back(i);
        }
    }
    return stk;
}

int main() {
    vector<int> asteroids = {5, 10, -5};
    vector<int> ans = asteroidCollision(asteroids);
    for(auto i : ans)
        cout << i << " ";
    cout << endl;
    return 0;
}