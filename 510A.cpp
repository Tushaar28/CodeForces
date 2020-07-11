#include <iostream>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    for(int i = 0;i < m;i++){
        if((i & 1) == 0){
            for(int j = 0;j < n;j++)
                cout << "#";
            
        }
        else{
            for(int j = 0;j < n - 1;j++)
                cout << ".";
            cout << "#";
        }
        cout << endl;
    }
}
