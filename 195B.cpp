#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr;
    int l = m / 2;
    int r = l + 1;
    if(m & 1){
        arr.push_back((m + 1) / 2);
        l = m / 2;
        r = l + 2;
    }
    while(l >= 1 && r <= m){
        arr.push_back(l);
        arr.push_back(r);
        l--;
        r++;
    }
    for(int i = 0;i < n;i++)
        cout << arr[i % m] << '\n';
}
