#include <bits/stdc++.h>
using namespace std;
int main() {
    int ans;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> ans;
    for(int i = 0;i < 3;i++){
        int first, second;
        cin >> first >> second;
        if(first != ans && second != ans)
            continue;
        if(first == ans)
            ans = second;
        else if(second == ans)
            ans = first;
    }
    cout << ans;
}
