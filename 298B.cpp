#include <iostream>
using namespace std;
int main() {
    int t, sx, sy, ex, ey, dx, dy, ans = 0;
    cin >> t >> sx >> sy >> ex >> ey;
    dx = ex - sx;
    dy = ey - sy;
    char arr[t];
    for(int i = 0;i < t;i++)
        cin >> arr[i];
    for(int i = 0;i < t;i++){
        if(dx > 0){
            if(arr[i] == 'E')
                dx--;
        }
        if(dy > 0){
            if(arr[i] == 'N')
                dy--;
        }
        if(dx < 0){
            if(arr[i] == 'W')
                dx++;
        }
        if(dy < 0){
            if(arr[i] == 'S')
                dy++;
        }
        if(dx == 0 && dy == 0){
            ans = i + 1;
            break;
        }
    }
    if(dx != 0 || dy != 0)
        ans = -1;
    cout << ans << endl;
}
