#include <iostream>
using namespace std;
int main() {
    int a, b, r;
    cin >> a >> b >> r;
    if(2 * r > min(a, b))
        cout << "Second";
    else
        cout << "First";
}
