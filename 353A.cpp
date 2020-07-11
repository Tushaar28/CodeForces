#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int left[n] = {0};
    int right[n] = {0};
    int sum_left = 0, sum_right = 0;
    for(int i = 0;i < n;i++){
        cin >> left[i];
        sum_left += left[i];
        cin >> right[i];
        sum_right += right[i];
    }
    if(sum_right % 2 == 0 && sum_left % 2 == 0)
        cout << 0 << endl;
    else if(sum_left % 2 != sum_right % 2)
        cout << -1 << endl;
    else if(sum_right % 2 == 1 && sum_left % 2 == 1){
        for(int i = 0;i < n;i++){
            if(left[i] % 2 != right[i] % 2){
                cout << 1 << endl;
                return 0;
            }
        }
        cout << -1 << endl;
    }
}
