#include <iostream>
using namespace std;
int main() {
    string s1, s2, res;
    string ans = "YES";
    cin >> s1 >> s2 >> res;
    int freq[26] = {0};
    int freq2[26] = {0};
    for(int i = 0;i < s1.size();i++)
        freq[s1[i] - 'A']++;
    for(int i = 0;i < s2.size();i++)
        freq[s2[i] - 'A']++;
    for(int i = 0;i < res.size();i++)
        freq2[res[i] - 'A']++;

    for(int i = 0;i < 26;i++){
        if(freq[i] != freq2[i]){
            ans = "NO";
            break;
        }
    }
    cout << ans << endl;
}
