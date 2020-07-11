#include <bits/stdc++.h>
using namespace std;

bool isLucky(int num){
    num = abs(num);
    while(num > 0){
        int d = num % 10;
        if(d == 8)
            return true;
        num /= 10;
    }
    return false;
}

int main() {
    int a;
    cin >> a;
    if(a <= 0 && a > -9){
        cout << 8 + abs(a);
        return 0;
    }
    for(int b = 1;b <= 10;b++){
        int num = a + b;
        if(isLucky(num)){
            cout << b;
            return 0;
        }
    }
}
