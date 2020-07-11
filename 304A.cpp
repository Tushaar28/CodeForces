#include <bits/stdc++.h>
using namespace std;
int main() {
    int cnt = 0;
    int n;
    cin >> n;
    for(int i = 1;i < n;i++){
        for(int j = i;j < n;j++){
            int k = sqrt(i * i + j * j);
            if(k * k == (i * i + j * j) && k <= n)
                cnt++;
        }
    }
    cout << cnt << endl;
}
