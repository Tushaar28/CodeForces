#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    bool flag = false;
    cin >> n;
    int arr[n] = {0};
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        if(arr[i] == 100)
            flag = true;
        sum += arr[i];
    }
    if(sum % 400 == 0 || (sum % 200 == 0 && flag))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
