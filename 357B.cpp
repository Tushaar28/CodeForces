#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    map<int, int> m;
    cin >> n >> x;
    while(n--){
        int a, b, c;
        cin >> a >> b >> c;
        if(m.find(a) != m.end()){
            m[b] = m[a] % 3 + 1;
            m[c] = m[b] % 3 + 1;
        }
        else if(m.find(b) != m.end()){
            m[c] = m[b] % 3 + 1;
            m[a] = m[c] % 3 + 1;
        }
        else{
            if(m.find(c) == m.end())
                m[c] = 1;
            m[a] = m[c] % 3 + 1;
            m[b] = m[a] % 3 + 1;
        }
    }
    for(auto i : m){
        cout << i.second << " ";
    }
}
