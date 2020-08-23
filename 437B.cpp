#include <bits/stdc++.h>
using namespace std;
int main() {
    int sum, limit;
    cin >> sum >> limit;
    vector<int> arr;
    for(int i = limit;i >= 1;i--){
        int x = i & (-i);
        if(x <= sum){
            sum -= x;
            arr.push_back(i);
        }
    }
    if(sum > 0)
        cout << -1;
    else{
        cout << arr.size() << endl;
        for(auto i : arr)
            cout << i << " ";
    }
}
