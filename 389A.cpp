#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n] = {0};
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    int gcd = arr[0];
    for(int i = 1;i < n;i++){
        gcd = __gcd(arr[i], gcd);
        if(gcd == 1)
            break;
    }
    cout << gcd * n;
}
