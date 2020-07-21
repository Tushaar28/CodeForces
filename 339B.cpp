#include <iostream>
#define int long long int
using namespace std;
int32_t main() {
    int n, m;
    int ans = 0;
    cin >> n >> m;
    int arr[m] = {0};
    for(int i = 0;i < m;i++)
        cin >> arr[i];
    ans = arr[0] - 1;
    for(int i = 1;i < m;i++){
        if(arr[i] < arr[i - 1])
            ans += (n - arr[i - 1] + arr[i]);
        else
            ans += arr[i] - arr[i - 1];
    }
    cout << ans;
}
