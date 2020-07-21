#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, i, j, a, b, x, y, op1, op2, op3, op4;
    cin >> n >> m >> i >> j >> a >> b;

    x = 1;y = 1;
    if(((i - x) % a != 0 || (j - y) % b != 0) || ((abs(i - x) / a) % 2 != ((abs(j - y) / b) % 2)))
        op1 = INT_MAX;
    else
        op1 = max((abs(i - x) / a), abs(j - y) / b);

    x = 1;y = m;
    if(((i - x) % a != 0 || (j - y) % b != 0) || ((abs(i - x) / a) % 2 != ((abs(j - y) / b) % 2)))
        op2 = INT_MAX;
    else
        op2 = max((abs(i - x) / a), abs(j - y) / b);

    x = n;y = 1;
    if(((i - x) % a != 0 || (j - y) % b != 0) || ((abs(i - x) / a) % 2 != ((abs(j - y) / b) % 2)))
        op3 = INT_MAX;
    else
        op3 = max((abs(i - x) / a), abs(j - y) / b);
    
    x = n;y = m;
    if(((i - x) % a != 0 || (j - y) % b != 0) || ((abs(i - x) / a) % 2 != ((abs(j - y) / b) % 2)))
        op4 = INT_MAX;
    else
        op4 = max((abs(i - x) / a), abs(j - y) / b);
        
    int ans = min(op1, min(op2, min(op3, op4)));
    if(ans != INT_MAX)
        cout << ans;
    else
        cout << "Poor Inna and pony!";
}
