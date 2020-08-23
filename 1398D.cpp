#include <bits/stdc++.h>
#define int long long int
using namespace std;

int r, g, b;
vector<int> R, G, B;
int dp[205][205][205];

int solve(int i, int j, int k){
    if((i == r && j == g) || (i == r && k == b) || (j == g && k == b)){
        //cout << "Base" << endl;
        return 0;
    }
    if(dp[i][j][k] != -1)
        return dp[i][j][k];
    int ans = 0;
    if(i < r && j < g){
        // << "First" << endl;
        ans = max(ans, R[i] * G[j] + solve(i + 1, j + 1, k));
        }
    if(i < r && k < b){
        //cout << "Second" << endl;
        ans = max(ans, R[i] * B[k] + solve(i + 1, j, k + 1));
    }
    if(j < g && k < b){
        //cout << "Third" << endl;
        ans = max(ans, G[j] * B[k] + solve(i, j + 1, k + 1));
    }
    return dp[i][j][k] = ans;
}

int32_t main() {
    memset(dp, -1, sizeof(dp));
    cin >> r >> g >> b;
    for(int i = 0;i < r;i++){
        int x;
        cin >> x;
        R.push_back(x);
    }
    for(int i = 0;i < g;i++){
        int x;
        cin >> x;
        G.push_back(x);
    }
    for(int i = 0;i < b;i++){
        int x;
        cin >> x;
        B.push_back(x);
    }
    sort(R.begin(), R.end(), greater<int>());
    sort(G.begin(), G.end(), greater<int>());
    sort(B.begin(), B.end(), greater<int>());
    cout << solve(0, 0, 0);
}
