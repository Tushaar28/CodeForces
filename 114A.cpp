#include <iostream>
using namespace std;
int main() {
    int k, l, cnt = 0;
    string ans = "NO";
    cin >> k >> l;
    while(l % k == 0){
        l /= k;
        cnt++;
        if(l == 1){
            ans = "YES";
            break;
        }
    }
    if(ans == "YES")
        cout << ans << endl << cnt - 1;
    else
        cout << "NO";
}
