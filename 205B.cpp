#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    int cnt = 0;
    for(int i = 0;i < n - 1;i++){
        if(arr[i] > arr[i + 1])
            cnt += arr[i] - arr[i + 1];
    }
    cout << cnt;
}
