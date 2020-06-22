#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int n;
    cin >> n;
    string arr[n] = {""};
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    unordered_map<string, int> m;
    string ans = "";
    int freq = 0;
    for(int i = 0;i < n;i++){
        if(m.find(arr[i]) == m.end()){
            m[arr[i]] = 1;
        }
        else{
            m[arr[i]] += 1;
        }
    }
    for(auto i : m){
        //cout << i.first << "->" << i.second << endl;
        if(freq < i.second){
            ans = i.first;
            freq = i.second;
        }
    }
    cout << ans << endl;
}
