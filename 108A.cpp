#include <iostream>
using namespace std;
int main() {
    int h, m;
    scanf("%d:%d", &h, &m);
    while(true){
        m++;
        if(m == 60){
            m = 0;
            h = (h + 1) % 24;
        }
        if(h % 10 == m / 10 && m % 10 == h / 10){
            printf("%02d:%02d", h, m);
            return 0;
        }
    }   
}
