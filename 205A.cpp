#include <iostream>
#include <climits>
#include <unordered_set>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n] = {0};
    int diff = INT_MAX, flag = 0, ans;
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    unordered_set<int> s;
    for(int i = 0;i < n;i++){
        if(s.find(arr[i]) != s.end()){
            flag = 1;
            break;
        }
        else{
            if(diff > arr[i]){
                diff = arr[i];
                ans = i + 1;
            }
            s.insert(arr[i]);
        }
    }
    if(flag)
        cout << "Still Rozdil" << endl;
    else
        cout << ans << endl;
}
