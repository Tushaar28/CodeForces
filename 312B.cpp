#include <bits/stdc++.h>
using namespace std;
int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double player_hit = a / b;
    double player_miss = 1 - player_hit;
    double opponent_hit = c / d;
    double opponent_miss = 1 - opponent_hit;
    //cout << player_hit << " " << player_miss << " " << opponent_hit << " " << opponent_miss << endl;
    int i = 0;
    double prob = 0.0;
    double round = player_miss * opponent_miss;
    prob = player_hit / (1 - round);
    cout << setprecision(18);
    cout << prob;
}
