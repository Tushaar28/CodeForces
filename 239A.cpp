#include <iostream>
using namespace std;
int main() {
    int y, k, n;
    cin >> y >> k >> n;
    if(y >= n || y + (k - (y % k)) > n){
        cout << -1;
        return 0;
    }
    for(int i = k - (y % k);i + y <= n;i += k)
        cout << i << " ";
}
