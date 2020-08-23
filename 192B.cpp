#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    int ans;
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    ans = min(arr[0], arr[n - 1]);
    for(int i = 0;i < n - 2;i++)
        ans = min(ans, max(arr[i], arr[i + 1]));
    cout << ans;
}
