#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int arr[n] = {0};
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    sort(arr, arr+n);
    int sum = 0, ans = 0;
    for(int i = 0;i < m;i++){
        if(arr[i] < 0){
            sum += abs(arr[i]);
            ans = max(ans, sum);
        }
        else{
            if(sum - arr[i] > ans){
            sum -= arr[i];
            ans = max(ans, sum);
            }
        }
    }
    cout << abs(sum) << endl;
}
