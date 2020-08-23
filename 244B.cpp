#include <bits/stdc++.h>
#define int long long int
using namespace std;
set<int> s;

void dfs(int i, int j, int num, int digit, int n){
    if(num > n || digit > 10)
        return;
    s.insert(num);
    dfs(i, j, num * 10 + i, digit + 1, n);
    dfs(i, j, num * 10 + j, digit + 1, n);
}

int32_t main() {
    int n;
    cin >> n;
    for(int i = 0;i < 10;i++){
        for(int j = 0;j < 10;j++){
            dfs(i, j, 0, 0, n);
        }
    }
    // for(auto i : s)
    //     cout << i << endl;
    cout << s.size() - 1;
}
