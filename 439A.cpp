#include <iostream>
using namespace std;
int main() {
    int n, d, sum = 0;
    cin >> n >> d;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        sum += x;
    }
    if(sum + (n - 1) * 10 > d){
        cout << -1;
        return 0;
    }
    cout << (d - sum) / 5;
}
