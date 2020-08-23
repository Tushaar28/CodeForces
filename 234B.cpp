#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
    cin >> n >> k;
    vector<pair<int, int>> arr(n);
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        arr[i].first = x;
        arr[i].second = i + 1;
    }
    sort(arr.begin(), arr.end(), greater<pair<int, int>>());
    cout << arr[k - 1].first << endl;
    for(int i = k - 1;i >= 0;i--)
        cout << arr[i].second << " ";
}
