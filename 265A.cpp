#include <iostream>
using namespace std;
int main() {
    string s, t;
    cin >> s >> t;
    int pos = 1;
    int i = 0, j = 0;
    while(i < s.size() && j < t.size()){
        if(t[j] == s[i]){
            i++;
            pos++;
        }
        j++;
    }
    cout << pos;
}
