#include <iostream>
using namespace std;
int main() {
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    int a = (d1 + c1 - r2) / 2;
    int b = r1 - a;
    int c = c1 - a;
    int d = r2 - (c1 - a);
    if(a <= 0 || a > 9 || b <= 0 || b > 9 || c <= 0 || c > 9 || d <= 0 || d > 9 || a == b || a == c || a == d || b == c || b == d || c == d)
        cout << -1;
    else
        cout << a << " " << b << endl << c << " " << d;
}
