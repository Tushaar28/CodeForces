#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second != p2.second)
        return p2.second < p1.second;
    else
        return p2.first < p1.first;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> arr;
    for(int i = 0;i < n;i++){
        int x, y;
        cin >> x >> y;
        arr.push_back({x, y});
    }
    sort(arr.begin(), arr.end(), comp);
    int ans = 0, cnt = 1;
    for(int i = 0;i < n && cnt > 0;i++){
        ans += arr[i].first;
        cnt += arr[i].second - 1;
    }
    cout << ans;
}
