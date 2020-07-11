#include <iostream>
using namespace std;
int main() {
    int n, k, ans = 0;
    cin >> n >> k;
    int arr[n] = {0};
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    for(int i = 0;i < n;i++){
        int cnt = 0;
        while(arr[i] > 0){
            int d = arr[i] % 10;
            if(d == 4 || d == 7)
                cnt++;
            arr[i] /= 10;
        }
        ans += (cnt <= k);
    }
    cout << ans;
}
