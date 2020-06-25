#include <bits/stdc++.h>
using namespace std;
int main() {
    int b, g, i = 1, j = 1;
    cin >> b >> g;
    bool boy = true;
    while(i <= b || j <= g){
        if(boy){
            cout << "B";
            i++;
        }
        else{
            cout << "G";
            j++;
        }
        boy = !boy;
    }
    while(i <= b){
        cout << "B";
        i++;
    }
    while(j <= g){
        cout << "G";
        j++;
    }
}
