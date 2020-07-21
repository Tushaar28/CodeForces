#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n] = {0};
        for(int i = 0;i < n;i++)
            cin >> arr[i];
        int pos = n - 1;
        while(pos > 0 && arr[pos - 1] >= arr[pos])
            pos--;
        while(pos > 0 && arr[pos - 1] <= arr[pos])
            pos--;
        cout << pos << endl;
    }
}
