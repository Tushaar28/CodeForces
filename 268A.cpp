#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int home[101] = {0}, sum = 0;
    int away[101] = {0};
    //int color[101] = {0};
    for(int i = 0;i < n;i++){
        int x, y;
        cin >> x >> y;
        home[x]++;
        away[y]++;
    }
    for(int i = 1;i <= 100;i++){
        sum += home[i] * away[i];
    }
    cout << sum << endl;
}
