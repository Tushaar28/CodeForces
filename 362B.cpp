#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr[m];
    for(int i = 0;i < m;i++)
        cin >> arr[i];
    sort(arr, arr + m);
    if(arr[0] == 1 || arr[m - 1] == n)
        cout << "NO";
    else{
        for(int i = 0;i < m - 2;i++){
            if(arr[i + 1] - arr[i] == 1 && arr[i + 2] - arr[i + 1] == 1){
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
}
