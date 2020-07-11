#include <iostream>
using namespace std;
int main() {
    int n, m;
    bool flag = false;
    cin >> n >> m;
    int arr[n][m] = {0};
    for(int i = 0;i < n;i++)
        for(int j = 0;j < m;j++)
            cin >> arr[i][j];
    for(int j = 0;j < m;j++)
        if(arr[0][j] == 1 || arr[n - 1][j] == 1){
            flag = true;
            break;
        }
    if(flag){
        cout << 2;
        return 0;
    }
    for(int i = 0;i < n;i++)
        if(arr[i][0] == 1 || arr[i][m - 1] == 1){
            flag = true;
            break;
        }
    if(flag){
        cout << 2;
        return 0;
    }
    cout << 4;
}
