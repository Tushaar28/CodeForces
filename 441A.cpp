#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, v;
    cin >> n >> v;
    set<int> s;
    vector<int> ans;
    for(int i = 1;i <= n;i++){
        int x;
        cin >> x;
        for(int j = 0;j < x;j++){
            int t;
            cin >> t;
            if(v > t){
                if(s.find(i) == s.end()){
                    ans.push_back(i);
                    s.insert(i);
                }
            }
        }
    }
    cout << ans.size() << endl;
    for(auto i : ans)
        cout << i << " ";
    
}
