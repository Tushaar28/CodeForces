#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x, y, diff = 10000;
    cin >> n;
    int arr[n] = {0};
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    for(int i = 0;i < n - 1;i++){   
        if(abs(arr[i] - arr[i + 1]) < diff){
            diff = abs(arr[i] - arr[i + 1]);
            x = i;
            y = i + 1;
            }
    }

    if(diff > abs(arr[0] - arr[n - 1])){
        x = 0;
        y = n - 1;
    }
    cout << x + 1 << " " << y + 1 << endl;
}
