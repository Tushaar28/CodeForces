#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, l;
    double dist = -1.0;
    cin >> n >> l;
    double arr[n] = {0};
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    sort(arr, arr + n);
    if(arr[0] != 0)
        dist = arr[0];
    for(int i = 0;i < n - 1;i++)
        dist = max(dist, double((arr[i + 1] - arr[i]) / 2));
    if(arr[n - 1] != l)
        dist = max(dist, l - arr[n - 1]);
    cout << fixed;
    cout << setprecision(9);
    cout << dist;
}
