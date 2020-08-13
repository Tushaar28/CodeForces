#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n] = {0};
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    int ans = arr[0] + 1;
    for(int i = 1;i < n;i++){
        //cout << ans << endl;
        if(arr[i - 1] > arr[i])
            ans += 2 + arr[i - 1] - arr[i];
        else
            ans += 1 + arr[i] - arr[i - 1] + 1;
    }
    cout << ans;
}
