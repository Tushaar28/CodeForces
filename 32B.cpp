#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    vector <int> ans;
    int n = s.size();
    for(int i = 0;i < n;i++){
        if(s[i] == '-' && (i + 1) < n && s[i + 1] == '.'){
            ans.push_back(1);
            i++;
        }
        else if(s[i] == '-' && (i + 1) < n && s[i + 1] == '-'){
            ans.push_back(2);
            i++;
        }
        else if(s[i] == '.')
            ans.push_back(0);
    }

    for(auto i : ans)
        cout << i;
    cout << endl;
}
