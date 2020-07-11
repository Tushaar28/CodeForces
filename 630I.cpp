#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long res = (2 * (4 * 3 * pow(4, n - 3))) + ((n - 3) * 4 * 9 * pow(4, n - 4));
    cout << res << endl;
}
