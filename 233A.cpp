#include <iostream>
using namespace std;

void func(int n){
    if(n & 1){
        cout << -1 << endl;
        return;
    }
    int arr[n + 1] = {0};
    for(int i = 1;i <= n;i++)
        arr[i] = i;
    for(int k = 1;k < n;k += 2){
        int t = arr[k];
        arr[k] = arr[k + 1];
        arr[k + 1] = t;
    }
    for(int i = 1;i <= n;i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
     cin >> n;
     func(n);
}
