#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int arr[m] = {0};
    for(int i = 0;i < m;i++)
        cin >> arr[i];
    int ans = INT_MAX;
    sort(arr, arr + m);
    for(int i = 0;i < m;i += n){
        if(i + n <= m)
            ans = min(ans, arr[i + n - 1] - arr[i]);
    }
    cout << ans << endl;
}
