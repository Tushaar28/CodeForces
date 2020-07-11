#include <iostream>
#define int long long int
using namespace std;

int binaryExponentiation(int a, int b){
    a = a % 10;
    int res = 1;
    while(b > 0){
        if(b & 1)
            res = (res * a) % 10;
        a = (a * a) % 10;
        b >>= 1;
    }
    return res % 10;
}

int32_t main() {
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << binaryExponentiation(a, b) << endl;
    }
}
