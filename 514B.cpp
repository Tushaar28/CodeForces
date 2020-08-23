#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    double x0, y0;
    cin >> n >> x0 >> y0;
    vector<pair<int, int>> arr;
    map<double, int> slopes;
    for(int i = 0;i < n;i++){
        int x, y;
        cin >> x >> y;
        arr.push_back({x, y});
    }
    for(pair<int, int> p: arr){
        double slope = 10000000;
        if(p.first != x0)
            slope = (y0 - p.second) / (x0 - p.first);
        //cout << slope << endl;
        slopes[slope]++;
    }
    // for(auto i : slopes)
    //     cout << i.first << " " << i.second << endl;
    cout << slopes.size();
}
