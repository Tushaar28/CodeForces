#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, ans = INT_MAX;
    cin >> n;
    int arr[n] = {0};
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    for(auto i : arr){
        int time = i * 15;
        while(i--){
            int x;
            cin >> x;
            time += x * 5;
        }
        ans = min(ans, time);
    }
    cout << ans;
}
