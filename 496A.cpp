#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, diff = -1, ans = INT_MAX;
    cin >> n;
    int arr[n] = {0};
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    for(int i = 1;i < n;i++)
        diff = max(diff, arr[i] - arr[i - 1]);
    for(int i = 1;i < n - 1;i++)
        ans = min(ans, arr[i + 1] - arr[i - 1]);
    cout << max(ans, diff) << endl;
}
