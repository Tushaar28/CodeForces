#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    if(n < m){
        //cout << "First condition\n";
        cout << "0/1";
        return 0;
    }
    int a, b, t1;
    cin >> a;
    for(int i = 0;i < n;i++)
        cin >> t1;
    cin >> b;
    for(int i = 0;i < m;i++)
        cin >> t1;
    if(n > m){
        //cout << "Second condition\n";
        if((a < 0 && b >= 0) || (b < 0 && a >= 0))
            cout << "-Infinity";
        else
            cout << "Infinity";
        return 0;
    }
    //cout << "Third condition\n";
    int g = __gcd(a, b);
    a /= g;
    b /= g;
    if((a < 0 && b >= 0 ) || (b < 0 && a >= 0))
        cout << "-" << abs(a) << "/" << abs(b);
    else
        cout << a << "/" << b;
}
