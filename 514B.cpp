#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x0, y0;
    cin >> n >> x0 >> y0;
    vector<pair<int, int>> arr;
    unordered_map<int, int> slopes;
    for(int i = 0;i < n;i++){
        int x, y;
        cin >> x >> y;
        arr.push_back({x, y});
    }
    for(pair<int, int> p: arr){
        int slope = 10000000;
        if(p.first != x0)
            slope = (y0 - p.second) / (x0 - p.first);
        //cout << slope << endl;
        slopes[slope]++;
    }
    cout << slopes.size();
}
