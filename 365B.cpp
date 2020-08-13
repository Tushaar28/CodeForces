#include <iostream>
#include <cstring>
#include <climits>
using namespace std;
int main() {
    int n;
    cin >> n;
    int *arr = new int[n + 1];
    for(int i = 1;i <= n;i++)
        cin >> arr[i];
    arr[0] = 0;
    int *dp = new int[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[1] = 1;
    dp[2] = 2;
    int ans = 2;
    for(int i = 3;i <= n;i++){
        if(arr[i] == arr[i - 1] + arr[i - 2])
            dp[i] = 1 + dp[i - 1];
        else
            dp[i] = 1;
        ans = max(ans, dp[i]);
    }
    cout << (n == 1? 1 : ans + 1) << endl;
}