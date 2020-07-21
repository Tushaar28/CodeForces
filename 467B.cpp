#include <iostream>
using namespace std;
int main() {
    int n, m, k, res = 0;
    cin >> n >> m >> k;
    int arr[m] = {0};
    for(int i = 0;i < m;i++)
        cin >> arr[i];
    int check;
    cin >> check;
    for(int i : arr){
        int x = i ^ check;
        int cnt = 0;
        while(x > 0){
            cnt += (x & 1);
            x >>= 1;
        }
        if(cnt <= k)
            res++;
    }
    cout << res;
}
