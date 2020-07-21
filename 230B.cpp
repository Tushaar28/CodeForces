#include <bits/stdc++.h>
using namespace std;

bool tPrime(int n){
    if(n == 1 || n == 2 || n == 3)
        return false;
    if(n == 4)
        return true;
    int cnt = 0;
    for(int i = 2;i * i <= n;i++){
        if(n % i == 0){
            if(i == n / i)
                cnt++;
            else
                return false;
        }
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        if(tPrime(x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
}
