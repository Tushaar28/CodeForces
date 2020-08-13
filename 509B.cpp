#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int arr[n] = {0};
    int low = INT_MAX, high = INT_MIN;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        low = min(low, arr[i]);
        high = max(high, arr[i]);
    }
    if(high - low > k){
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    for(int i = 0;i < n;i++){
        int col = 1;
        for(int j = 1;j <= arr[i];j++){
            cout << col % (k + 1) << " ";
            col++;
            if(col == k + 1)
                col = 1;
        }
        cout << "\n";
    }
}
