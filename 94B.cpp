#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(6, 0);
    for(int i = 0;i < n;i++){
        int x, y;
        cin >> x >> y;
        arr[x]++;
        arr[y]++;
    }
    
    for(int i = 1;i < 6;i++){
        if(arr[i] >= 3 || arr[i] <= 1){
            cout << "WIN";
            return 0;
        }
    }
    cout << "FAIL";
}
