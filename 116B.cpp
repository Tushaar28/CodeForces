#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, cnt = 0;
    cin >> n >> m;
    char arr[n][m];

    for(int i = 0;i < n;i++)
        for(int j = 0;j < m;j++)
            cin >> arr[i][j];
            
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(arr[i][j] == 'P'){
                if(i - 1 >= 0 && arr[i - 1][j] == 'W'){
                    cnt++;
                    arr[i][j] = '.';
                    arr[i - 1][j] = '.';
                }
                else if(i + 1 < n && arr[i + 1][j] == 'W'){
                    cnt++;
                    arr[i][j] = '.';
                    arr[i + 1][j] = '.';
                }
                else if(j - 1 >= 0 && arr[i][j - 1] == 'W'){
                    cnt++;
                    arr[i][j - 1] = '.';
                    arr[i][j] = '.';
                }
                else if(j + 1 < m && arr[i][j + 1] == 'W'){
                    cnt++;
                    arr[i][j] = '.';
                    arr[i][j + 1] = '.';
                }
                arr[i][j] = '.';
            }
        }
    }
    cout << cnt;
}
