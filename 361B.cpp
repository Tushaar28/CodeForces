#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    if(n == 1){
        if(k == 0)
            cout << 1;
        else
            cout << -1;
        return 0;
    }
    if(n == k){
        cout << -1;
        return 0;
    }
    cout << n - k << " ";
    for(int i = 2;i <= n - k;i++)
        cout << i - 1 << " ";
    for(int i = n - k + 1;i <= n;i++)
        cout << i << " ";
}
