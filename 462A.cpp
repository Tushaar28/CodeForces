#include <iostream>
using namespace std;
int main() {
    int n, cnt = 0;
    cin >> n;
    char arr[n][n];
    string ans = "YES";
    for(int i = 0;i < n;i++)
        for(int j = 0;j < n;j++)
            cin >> arr[i][j];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cnt = 0;
            if(i - 1 >= 0 && arr[i - 1][j] == 'o')
                cnt++;
            if(i + 1 < n && arr[i + 1][j] == 'o')
                cnt++;
            if(j - 1 >= 0 && arr[i][j - 1] == 'o')
                cnt++;
            if(j + 1 < n && arr[i][j + 1] == 'o')
                cnt++;
            if(cnt % 2 != 0){
                ans = "NO";
                break;
            }
        }
    }
    cout << ans << endl;
}
