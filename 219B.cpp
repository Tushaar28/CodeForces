#include <iostream>
using namespace std;
int main() {
    long long int n, d;
    cin >> n >> d;
    long long int x = ++n;
    long long int i = 10;
    while(n % i <= d){
        x = n - n % i;
        i *= 10;
    }
    cout << x - 1;
}
