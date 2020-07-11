#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n + 1] = {0};
    int res[n + 1] = {0};
    for(int i = 1;i <= n;i++){
        cin >> arr[i];
        res[arr[i]] = i;
    }
    for(int i = 1;i <= n;i++)
        cout << res[i] << " ";
    cout << endl;
}
