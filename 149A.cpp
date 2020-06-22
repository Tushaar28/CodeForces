#include <bits/stdc++.h>
using namespace std;
int main() {
    int k;
    cin >> k;
    int arr[12] = {0};
    for(int i = 0;i < 12;i++)
        cin >> arr[i];
    sort(arr, arr + 12, greater<int>());
    int cnt = 0, sum = 0;
    for(int i = 0;i < 12;i++){
        sum += arr[i];
        cnt++;
        if(sum >= k)
            break;
    }
    if(k == 0)
        cout << 0 << endl;
    else
        cout << cnt << endl;
}
