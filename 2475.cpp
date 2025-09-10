#include <iostream>
using namespace std;

int main() {

    int a, b, c, d, e;
    int check;
    cin >> a >> b >> c >> d >> e;
    check = (a*a + b*b + c*c + d*d + e*e);
    cout << check % 10;

    return 0;
}
