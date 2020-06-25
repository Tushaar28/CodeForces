#include <iostream>
using namespace std;

int num_divisor(int n){
    int cnt = 0;
    for(int i = 1;i <= n;i++){
        if(n % i == 0)
            cnt++;
    }
    return cnt;
}

int main() {
    int a, b, c, sum = 0;
    cin >> a >> b >> c;
    for(int i = 1;i <= a;i++){
        for(int j = 1;j <= b;j++){
            for(int k = 1;k <= c;k++){
                int div = num_divisor(i * j * k);
                sum += div;
            }
        }
    }

    cout << sum << endl;

}
