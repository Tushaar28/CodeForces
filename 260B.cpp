#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string, int> m;
    string s, res, temp;
    cin >> s;
    int cnt = 0, ans = 0, days, day, i;
    for(int year = 2013;year < 2016;year++){
        for(int months = 1;months < 13;months++){
            if(months == 2)
                days = 28;
            else if(months == 1 || months == 3|| months == 5 || months == 7 || months == 8 || months == 10 || months == 12)
                days = 31;
            else
                days = 30;
            for(day = 1;day <= days;day++){
                for(i = 0;i <= s.size() - 10;i++){
                    //cout << s.substr(i, 10) << endl;
                    temp = to_string(day) + "-" + to_string(months) + "-" + to_string(year);
                    if(months < 10)
                        temp.insert(3, "0");
                    if(day < 10)
                        temp.insert(0, "0");
                    if(s.substr(i, 10).compare(temp) == 0)
                        m[temp]++;
                    
                }
                if(m[temp] > ans){
                    ans = m[temp];
                    res = temp;
                }
            }
        }
    }
    cout << res;
}