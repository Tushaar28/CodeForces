#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int x;
    int l = -2e9;
    int r = 2e9;
    string a, b;
    cin >> n;
    while(n--){
        cin >> a >> x >> b;
        if((a == ">=" && b == "Y") || (a == "<" && b == "N"))
            l = max(l, x);
        else if((a == ">" && b == "Y") || (a == "<=" && b == "N"))
            l = max(l, x + 1);
        else if((a == "<=" && b == "Y") || (a == ">" && b == "N"))
            r = min(r, x);
        else
            r = min(r, x - 1);
    }
    if(l > r)
        cout << "Impossible";
    else
        cout << l;
}
