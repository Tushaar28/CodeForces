#include <iostream>
using namespace std;
int main() {
    int y, k, n;
    cin >> y >> k >> n;
    int mx = n - y;
    if(mx < 1)
        cout << -1 << endl;
    else{
        for(int i = 1;i <= n;i += k){
            if((i + y) % k == 0)
                cout << i << " ";
        }
    }
    cout << endl;
}
