#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, src, dest;
    cin >> n >> m >> src >> dest;
    string ans = "";
    int step = 1;
    while(m--){
        int t, s, e;
        cin >> t >> s >> e;
        while(t > step){
            if(src == dest){
                cout << ans;
                return 0;
            }
            else if(src < dest){
                ans.push_back('R');
                src++;
            }
            else{
                ans.push_back('L');
                src--;
            }
            step++;
        }
        if(src == dest){
            cout << ans;
            return 0;
        }
        else if(src < dest){
            if(src > e || s - src > 1){
                ans.push_back('R');
                src++;
            }
            else 
                ans.push_back('X');
        }
        else{
            if(s > src || src - e > 2){
                ans.push_back('L');
                src--;
            }
            else
                ans.push_back('X');
        }
        step++;
    }
    cout << ans;
}
