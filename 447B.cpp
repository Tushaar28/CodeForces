#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    int arr[26] = {0};
    int wt = 0, max_wt = INT_MIN;
    for(int i = 0;i < 26;i++){
        cin >> arr[i];
        max_wt = max(max_wt, arr[i]);
    }
    for(int i = 0;i < s.size();i++)
        wt += (i + 1) * (arr[s[i] - 'a']);
    int i = s.size() + 1;
    while(k--){
        wt += (i * max_wt);
        i++;
    }
    cout << wt;
}
