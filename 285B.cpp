#include <iostream>
using namespace std;
int main() {
    int n, i, j;
    cin >> n >> i >> j;
    int arr[n + 1] = {0};
    for(int i = 1;i <= n;i++)
        cin >> arr[i];
    if(i == j){
        cout << 0;
        return 0;
    }
    int cnt = 0;
    for(int x = 0;x < n;x++){
        if(i == j){
            cout << cnt;
            return 0;
        }
        i = arr[i];
        cnt++;
    }
    cout << -1;
}
