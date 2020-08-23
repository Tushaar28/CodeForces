#include <bits/stdc++.h>
using namespace std;
int main() {

    int na, ma;
    cin >> na >> ma;
    int arr1[na][ma];
    for(int i = 0;i < na;i++)
        for(int j = 0;j < ma;j++)
            cin >> arr1[i][j];

    int nb, mb;
    cin >> nb >> mb;
    int arr2[nb][mb];
    for(int i = 0;i < nb;i++)
        for(int j = 0;j < mb;j++)
            cin >> arr2[i][j];

    int ans = INT_MIN, x, y;

    for(int i = -50;i <= 50;i++){
        for(int j = -50;j <= 50;j++){
            int sum = 0;
            for(int k = 0;k < na;k++){
                for(int l = 0;l < ma;l++){
                    if(i + k >= 0 && i + k < nb && l + j >= 0 && l + j < mb && arr1[k][l] == 1 && arr2[i + k][l + j] == 1)
                        sum++;
                }
            }
            if(sum > ans){
                ans = sum;
                x = i;
                y = j;
            }
        }
    } 
    cout << x << " " << y;       
}
