#include <bits/stdc++.h>
using namespace std;
int main() {
    int d, t, sum_high = 0, sum_low = 0;
    cin >> d >> t;
    vector<pair<int, int>> arr;
    for(int i = 0;i < d;i++){
        int x, y;
        cin >> x >> y;
        sum_low += x;
        sum_high += y;
        arr.push_back({x, y});
    }
    if(t > sum_high || t < sum_low){
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    int diff = sum_high - t;
    for(int i = 0;i < d;i++){
        if(diff >= arr[i].second - arr[i].first){
            cout << arr[i].first << " ";
            diff -= (arr[i].second - arr[i].first);
        }
        else{
            cout << arr[i].second - diff << " ";
            diff = 0;
        }
        
    }
}
