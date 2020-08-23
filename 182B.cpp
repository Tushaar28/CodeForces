#include <iostream>
using namespace std;
int main() {
    int d;
    cin >> d;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    int total = 0;
    for(int i = 1;i < n;i++){
        total += (abs(arr[i - 1] - d));
    }
    cout << total;
}
