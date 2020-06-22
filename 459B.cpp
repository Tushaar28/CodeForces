#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, diff = 0, l = 0, h = 0, mn = INT_MAX, mx = INT_MIN;
    long long ways = 0;
    cin >> n;
    int arr[n] = {0};
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }
    diff = mx - mn;
    l = count(arr, arr + n, mn);
    h = count(arr, arr + n, mx);
    ways = l * h;
    if(diff == 0)
        cout << diff << " " << n * (n - 1) / 2 << endl;
    else
        cout << diff << " " << ways << endl;
}
