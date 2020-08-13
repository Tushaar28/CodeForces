#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int arr[n] = {0};
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    int x, i = 0;
    while(cin >> x){
        if(arr[i] <= x && i < n)
            i++;
    }
    cout << n - i;
}
