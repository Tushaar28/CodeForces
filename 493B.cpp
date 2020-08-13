#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
    int n, last, total_first = 0, total_second = 0;
    cin >> n;
    vector<int> first, second;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        //cout << x << endl;
        if(i == n - 1)
            last = x;
        if(x < 0){
            second.push_back(abs(x));
            total_second += abs(x);
        }
        else{
            first.push_back(x);
            total_first += x;
        }
    }
    //cout << total_first << " " << total_second << endl;
    if(total_first > total_second){
        cout << "first";
        return 0;
    }
    if(total_second > total_first){
        cout << "second";
        return 0;
    }
    //cout << first.size() << " " << second.size() << endl;
    for(int i = 0;i < min(first.size(), second.size());i++){
        if(first[i] > second[i]){
            cout << "first";
            return 0;
        }
        if(second[i] > first[i]){
            cout << "second";
            return 0;
        }
    }
    if(last > 0){
        cout << "first";
        return 0;
    }
    else
        cout << "second";
}
