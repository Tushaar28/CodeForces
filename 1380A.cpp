#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n + 1] = {0};
        for(int i = 1;i <= n;i++)
            cin >> arr[i];
        if(arr[1] == n || arr[n] == n)
            cout << "NO" << endl;
        else{
            cout << "YES\n";
            cout << 1 << " ";
            for(int i = 1;i <= n;i++){
                if(arr[i] == n){
                    cout << i << " " << n << endl;
                    break;
                }
            }
        }
    }
}
