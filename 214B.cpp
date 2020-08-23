#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, sum = 0;
    cin >> n;
    //cout << n << "\n";
    vector<int> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    //cout << arr.size() << "\n";
    sort(arr.begin(), arr.end(), greater<int>());
    if(arr[n - 1] != 0){
        cout << -1;
        return 0;
    }
    if(!sum % 3){
        if(arr[0] == 0){
            cout << 0;
            return 0;
        }
        else
            for(auto i : arr)
                cout << i;
        return 0;
    }
    if(sum % 3 == 1){
        bool done = false;
        for(int i = n - 1;i >= 0;i--){
            if(arr[i] % 3 == 1){
                arr.erase(arr.begin() + i);
                done = true;
                break;
            }
        }
        if(!done){
            int cnt = 0;
            for(int i = n - 1;i >= 0;i--){
                if(cnt == 2)
                    break;
                if(arr[i] % 3 == 2){
                    arr.erase(arr.begin() + i);
                    cnt++;
                }
            }
        }
        for(auto i : arr)
            cout << i;
        return 0;
    }
    bool done = false;
    for(int i = n - 1;i >= 0;i--){
        if(arr[i] % 3 == 2){
            arr.erase(arr.begin() + i);
            done = true;
            break;
        }
    }
    if(!done){
        int cnt = 0;
        for(int i = n - 1;i >= 0;i--){
            if(cnt == 2)
                break;
            if(arr[i] % 3 == 1){
                arr.erase(arr.begin() + i);
                cnt++;
            }
        }
    }
    for(auto i : arr)
        cout << i;
    return 0;
}
