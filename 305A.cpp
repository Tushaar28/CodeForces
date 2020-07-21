#include <bits/stdc++.h>
using namespace std;

bool containZero(int n){
    if(n == 0)
        return true;
    while(n > 0){
        int d = n % 10;
        if(d == 0)
            return true;
        n /= 10;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<int> zero, non_zero;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        if(containZero(x))
            zero.push_back(x);
        else
            non_zero.push_back(x);
    }
    int x = zero.size(), y = non_zero.size();
    if(x > y){
        int cnt = 2 * y + ((x - y) / 2) * 2;
        cout << cnt << endl;
        int i = 0, j = 0;
        while(i < x && j < y){
            cout << zero[i] << " " << non_zero[j] << " ";
            cnt -= 2;
            i++;j++;
        }
        while(cnt > 0 && i < x){
            cout << zero[i] << " ";
            i++;cnt--;
        }
        return 0;
    }
    if(y > x){
        int cnt = 2 * x;
        cout << cnt << endl;
        int i = 0, j = 0;
        while(i < x && j < y){
            cout << zero[i] << " " << non_zero[j] << " ";
            cnt -= 2;
            i++;j++; 
        }
        return 0;
    }
    if(x == y){
        cout << n << endl;
        int i = 0, j = 0;
        while(i < x && j < y){
            cout << zero[i] << " " << non_zero[j] << " ";
            i++;j++;
        }
    }
}
