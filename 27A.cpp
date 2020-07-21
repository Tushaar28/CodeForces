#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    unordered_set<int> s;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    int i = 1;
    while(true){
        if(s.find(i) == s.end())
            break;
        i++;
    }
    cout << i;
}
