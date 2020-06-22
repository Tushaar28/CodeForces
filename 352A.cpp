#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n] = {0};
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    int c0 = 0, c5 = 0;
    for(int i = 0;i < n;i++){
        if(arr[i] == 5)
            c5++;
        else
            c0++;
    }
    if(c0 > 0 && c5 < 9)
        cout << 0 << endl;
    else if(c0 > 0 && c5 >= 9){
        c5 = c5 - (c5 % 9);
        for(int i = 0;i < c5;i++)
            cout << 5;
        for(int i = 0;i < c0;i++)
            cout << 0;
        cout << endl;
    }
    else
        cout << -1 << endl;
}
