#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> left, right;
    vector<pair<int, int>> res(n / 2);
    for(int i = 0;i < n;i++){
        char ch;
        cin >> ch;
        if(ch == 'L')
            left.push_back(i + 1);
        else
            right.push_back(i + 1);
    }
    int i = 0, j = 0, k = 0;
    while(i < left.size() && j < right.size()){
        res[k].first = left[i];
        res[k].second = right[j];
        i++;j++;k++;
    }
    for(int x = i;x < left.size();){
        if(x + 2 < left.size()){
            res[k].first = left[x];
            res[k].second = left[x + 2];
            k++;
        }
        x++;
    }
    for(int x = j;x < right.size();){
        if(x + 2 < right.size()){
            res[k].first = right[x];
            res[k].second = right[x + 2];
            k++;
        }
        x++;
    }
    for(auto x : res){
        cout << x.first << " " << x.second << endl;
    }
}
