#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    set<char> diag;
    set<char> other;
    //char arr[n][n];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            char ch;
            cin >> ch;
            if(i == j || i + j == n - 1)
                diag.insert(ch);
            else
                other.insert(ch);
        }
    }
    if(diag.size() == 1 && other.size() == 1 && *diag.begin() != *other.begin())
        cout << "YES";
    else
        cout << "NO";
}
