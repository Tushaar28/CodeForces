#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n] = {0}, sum = 0, cnt = 0;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    int pos = sum % (n + 1) - 1;
    for(int i = 1;i < 6;i++){
        if((pos + i) % (n + 1) != 0)
            cnt++;
    }

    cout << cnt << endl;

}
