#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n] = {0};
    map<int, vector<int>> m;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        m[arr[i]].push_back(i);
    }
    vector<pair<int, int>> res;
    for(auto i : m){
        int x = i.first;
        if(i.second.size() == 1)
            res.push_back({x, 0});
        else{
        set<int> s;
        for(int j = 0;j < i.second.size() - 1;j++){
            s.insert(abs(i.second[j + 1] - i.second[j]));
        }
        if(s.size() == 1){
            set<int>::iterator it = s.begin();
            res.push_back({x, *it});
            }
        }
    }

    cout << res.size() << endl;
    for(auto i : res)
        cout << i.first << " " << i.second << endl;
}
