#include <bits/stdc++.h>
using namespace std;

bool mycomp(pair<int, int> p1, pair<int, int> p2){
    return p1.first < p2.first;
}

int main() {
    int n;
    cin >> n;
    pair<int, int> laptops[n];
    for(int i = 0;i < n;i++){
        int a, b;
        cin >> a >> b;
        laptops[i] = {a, b};
    }
    sort(laptops, laptops + n, mycomp);
    for(int i = 0;i < n - 1;i++){
        if(laptops[i].first < laptops[i + 1].first && laptops[i].second > laptops[i + 1].second){
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";
}
