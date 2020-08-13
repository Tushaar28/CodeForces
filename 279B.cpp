#include <bits/stdc++.h>
using namespace std;

bool isValid(int arr[], int x, int t){
    for(int i = 0;i < x;i++){
        t -= arr[i];
        if(t < 0)
            return false;
    }
    return true;
}

int main() {
    int n, t;
    cin >> n >> t;
    int arr[n];
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int s = 0, e = n, ans = 0;
    while(s <= e){
        int mid = s + (e - s) / 2;
        if(isValid(arr, mid, t)){
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    cout << ans;
}
