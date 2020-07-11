#include <iostream>
using namespace std;
int main() {
    int n, carry = 0;
    cin >> n;
    int arr[n] = {0};
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    if(arr[0] != 25){
        cout << "NO" << endl;
        return 0;
    }
    carry = 25;
    for(int i = 1;i < n;i++){
        if(carry >= arr[i] - 25){
            carry += 25;
        }
        else{
            carry = 25 - arr[i];
        }
        if(carry < 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES" << endl;
}
