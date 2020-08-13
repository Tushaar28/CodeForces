#include <bits/stdc++.h>
using namespace std;
int main() {
    string n, m;
    cin >> n >> m;
    map<char, int> m1;
    for(char ch: n)
        m1[ch]++;
    map<char, int> m2;
    for(char ch: m)
        m2[ch]++;
    int ans = 0;
    for(auto i: m2){
        char ch = i.first;
        if(m1.find(ch) == m1.end()){
            cout << -1;
            return 0;
        }
        //cout << m1[ch] << " " << m2[ch] << endl;
        ans += min(m1[ch], m2[ch]);
    }
    cout << ans;
}
