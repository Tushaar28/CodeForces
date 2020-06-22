#include <iostream>
using namespace std;
int main() {
    int n, low = 101, high = 0, ans = 0, l_index = -1, h_index = -1;
    cin >> n;
    int arr[n] = {0};
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    for(int i = 0;i < n;i++){
        if(arr[i] <= low){
            low = arr[i];
            l_index = i;
        }
        if(arr[i] > high){
            high = arr[i];
            h_index = i;
        }
    }
    ans = h_index + (n - 1 - l_index);
    //cout << l_index << " " << h_index << endl;
    if(l_index < h_index)
        ans--;
    cout << ans << endl;
}
