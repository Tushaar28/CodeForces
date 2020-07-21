#include <iostream>
using namespace std;
int main() {
    string s[12] = {"C","C#","D","D#","E","F","F#","G","G#","A","B","H"}, a, b, c;
    int x[12] = {0};
    cin >> a >> b >> c;
    for(int i = 0;i < 12;i++){
        if(s[i] == a || s[i] == b || s[i] == c)
            x[i] = 1;
    }
    for(int i = 0;i < 12;i++){
        if(x[i]){
            if(x[(i + 4) % 12] && x[(i + 7) % 12]){
                cout << "major";
                return 0;
            }
            else if(x[(i + 3) % 12] && x[(i + 7) % 12]){
                cout << "minor";
                return 0;
            }
        }
    }
    cout << "strange";
}
