#include <iostream>
using namespace std;
int main() {
    int n;
    int chest = 0, biceps = 0, back = 0;
    cin >> n;
    int arr[n] = {0};
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        if(i % 3 == 0)
            chest += arr[i];
        else if(i % 2 == 1)
            biceps += arr[i];
        else
            back += arr[i];
    }
    if(max(chest, max(biceps, back)) == chest)
        cout << "chest" << endl;
    else if(max(chest, max(biceps, back)) == biceps)
        cout << "biceps" << endl;
    else
        cout << "back" << endl;
}
