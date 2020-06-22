#include <iostream>
using namespace std;
int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int s = a;
    int e = n - 1 - b;
    cout << s + e << endl;
}
