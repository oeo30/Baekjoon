#include <iostream>
#include <string>
using namespace std;

int main() {
   int m[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
   string d[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

    int x, y;
    cin >> x >> y;

    for (int i = 0; i < x - 1; i++) {
        y += m[i];
    }

    cout << d[y % 7] << '\n';

    return 0;
}