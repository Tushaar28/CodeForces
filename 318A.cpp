#include <iostream>
#define int long
using namespace std;

int func(int n, int k){
    if(n & 1){
        if(k > (n + 1) / 2){
            k -= (n + 1) / 2;
            return 2 + 2 * (k - 1);
        }
        return 1 + 2 * (k - 1);
    }
    else{
        if(k <= n / 2){
            return 1 + 2 * (k - 1);
        }
        else{
            k -= n / 2;
            return 2 + 2 * (k - 1);
        }
    }
}

int32_t main() {
    int n, k;
    cin >> n >> k;
    cout << func(n, k) << endl;
    
}
