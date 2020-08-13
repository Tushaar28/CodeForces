#include <bits/stdc++.h>
#define PI 3.141592653589793
using namespace std;
int main() {
    int n;
    double ans = 0;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        arr[i] = x * x;
    }
    sort(arr, arr + n);
    for(int i = n - 1;i >= 1;i -= 2)
        ans += arr[i] - arr[i - 1];
    if(n & 1)
        ans += arr[0];
    ans *= PI;
    cout << setprecision(8);
    cout << ans;
}
