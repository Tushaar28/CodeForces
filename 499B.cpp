#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> map;
    for(int i = 0;i < m;i++){
        string a, b;
        cin >> a >> b;
        map[a] = b;
    }
    string ans = "";
    while(n--){
        string temp;
        cin >> temp;
        ans += (map[temp].size() < temp.size())? map[temp] : temp;
        ans += " ";
    }
    cout << ans;
}
