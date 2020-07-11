#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, diff = INT_MAX;
    cin >> n >> m;
    int arr[m] = {0};
    for(int i = 0;i < m;i++)
        cin >> arr[i];
    sort(arr, arr + m);
    for(int i = 0;i < m;i++){
        if((i + n - 1) < m)
            diff = min(diff, arr[i + n - 1] - arr[i]);
        else
            break;
    }
    cout << diff << endl;
}
