#include <iostream>
#define ll long long
using namespace std;
int main() {
    ll l, r;
    cin >> l >> r;
    if(r - l + 1 < 3){
        cout << -1 << endl;
        return 0;
    }
    if((l & 1) == 0){
        cout << l << " " << l + 1 << " " << l + 2 << endl;
        return 0;
    }
    if(l + 3 <= r){
        cout << l + 1 << " " << l + 2 << " " << l + 3 << endl;
        return 0;
    }
    cout << -1 << endl;
    
}
