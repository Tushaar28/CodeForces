#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cin >> n;
    int days[7] = {0};
    for(int i = 0;i < 7;i++)
        cin >> days[i];
    for(int i = 0;;i = (i + 1) % 7){
        sum += days[i];
        if(sum >= n){
            cout << i + 1 << endl;
            break;
        }
    }
}
