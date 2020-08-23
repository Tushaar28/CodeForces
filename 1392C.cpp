#include <bits/stdc++.h>
#define int long long int
#define w(t) int t; cin >> t; while(t--)
#define end endl
#define fr(i, a, b) for(int i = a;i < b;i++)
#define rfr(i, a, b) for(int i = a;i >= b;i--)
#define vi vector<int>
#define pii pair<int, int>
using namespace std;
int32_t main() {
    w(t){
        int n;
        cin >> n;
        int arr[n];
        fr(i, 0, n)
            cin >> arr[i];
        int cnt = 0;
        fr(i, 0, n - 1){
            if(arr[i] > arr[i + 1])
                cnt += arr[i] - arr[i+1];
        }
        cout << cnt << endl;
    }
}
