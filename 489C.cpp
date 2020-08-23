#include <bits/stdc++.h>
using namespace std;

bool isPossible(int n, int s){
    return s >= 0 && s <= 9 * n;
}

int main() {
    int n, s;
    cin >> n >> s;
    int sum = s;
    vector<char> arr;
    for(int i = 0;i < n;i++){
        for(int digit = 0;digit < 10;digit++){
            if((i > 0 || digit > 0 || (n == 1 && digit == 0)) && isPossible(n - 1 - i, sum - digit)){
                arr.push_back('0' + digit);
                sum -= digit;
                break;
            }
        }
    }
    if(arr.size() == 0 || arr[0] == '0'){
        cout << -1 << " " << -1;
        return 0;
    }
    for(char ch : arr)
        cout << ch;
    cout << " ";
    if(arr[arr.size() - 1] != '0')
        for(int i = arr.size() - 1;i >= 0;i--)
            cout << arr[i];
    else
        for(char ch : arr)
        cout << ch;
}
