#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, cl = INT_MAX, ch = INT_MIN, wl = INT_MAX;
    cin >> n >> m;
    int correct[n] = {0};
    int wrong[m] = {0};
    for(int i = 0;i < n;i++){
        cin >> correct[i];
        if(correct[i] < cl)
            cl = correct[i];
        if(correct[i] > ch)
            ch = correct[i];
    }
    for(int i = 0;i < m;i++){
        cin >> wrong[i];
        if(wrong[i] < wl)
            wl = wrong[i];
    }
    if(max(2 * cl, ch) < wl)
        cout << max(2 * cl, ch);
    else
        cout << -1;
}
