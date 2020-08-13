#include <bits/stdc++.h>
using namespace std;
int main() {
    int freq[26] = {0};
    string s;
    cin >> s;
    for(char ch: s)
        freq[ch - 'a']++;
    int cnt = 0;
    for(int i = 0;i < 26;i++)
        if(freq[i] % 2 != 0)
            cnt++;
    if(cnt <= 1 || cnt % 2 != 0)
        cout << "First\n";
    else if(cnt % 2 == 0)
        cout << "Second\n";
}
