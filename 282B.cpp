#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, sum_a = 0, sum_g = 0;
    cin >> n;
    string ans = "";
    vector<pair<int, int>> arr;
    for(int i = 0;i < n;i++){
        int x, y;
        cin >> x >> y;
        arr.push_back({x, y});
    }
    if(arr[0].second != 0){
        ans.push_back('A');
        sum_a += arr[0].first;
    }
    else{
        ans.push_back('G');
        sum_g += arr[0].second;
    }
    for(int i = 1;i < n;i++){
        sum_a += arr[i].first;
        if(sum_a - sum_g <= 500){
            ans.push_back('A');
        }
        else{
            sum_a -= arr[i].first;
            ans.push_back('G');
            sum_g += arr[i].second;
        }
    }
    if(sum_a - sum_g <= 500)
        cout << ans;
    else
        cout << -1;
}
