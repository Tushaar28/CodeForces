#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int pivot = -1, left = 0, right = 0;
    for(int i = 0;i < s.size();i++)
        if(s[i] == '^'){
            pivot = i;
            break;
        }
    for(int i = 0;i < s.size();i++){
        if(s[i] == '=' || s[i] == '^')
            continue;
        if(i < pivot)
            left += (s[i] - '0') * (pivot - i);
        else
            right += (s[i] - '0') * (i - pivot);
    }
    //cout << pivot << endl << left << " " << right << endl;
    if(left == right)
        cout << "balance";
    else if(left > right)
        cout << "left";
    else
        cout << "right";
}
