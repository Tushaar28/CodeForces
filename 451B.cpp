#include <iostream>
using namespace std;
int main() {
    int start = 1, end = start, n;
    cin >> n;
    int arr[n + 1] = {0};
    for(int i = 1;i <= n;i++)
        cin >> arr[i];
    for(int i = 1;i < n;i++){
        if(arr[i] > arr[i + 1]){
            start = min(start, i);
            end = max(end, i + 1);
        }
    }
    //cout << start << " " << end << endl;
    int x = start, y = end;
    while(x < y){
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
        x++;y--;
    }
    // for(int i = 1;i <= n;i++)
    //     cout << arr[i] << " ";
    // cout << endl;
    for(int i = 1;i < n;i++){
        //cout << arr[i] << " " << arr[i + 1] << endl;
        if(arr[i] > arr[i + 1]){
            cout << "no";
            return 0;
        }
    }
    cout << "yes\n" << start << " " << end;
}
