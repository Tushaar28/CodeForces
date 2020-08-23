#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    if(n == 0){
        cout << "";
        return 0;
    }
    int round = n / 4;
    for(int i = 0;i < round;i++)
        cout << "abcd";
    int rem = n % 4;
    int index = 97;
    for(int i = 0;i < rem;i++){
        cout << char(index + i);
    }
}
