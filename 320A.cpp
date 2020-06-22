#include <iostream>
#include <cstring>
using namespace std;
int main() {
    string s;
    string ans = "YES";
    cin >> s;
    int n = s.size();
    for(int i = 0;i < n;i++){
        if(s[i] != '1' && s[i] != '4'){
            ans = "NO";
            break;
        }
    }
    if(s[0] == '4')
        ans = "NO";
    if(s.find("444") != s.npos)
        ans = "NO";

    cout << ans << endl;
}
