#include <iostream>
using namespace std;

int main() {
    int h, m;
    cin >> h >> m;
    if(h==0 && m<45) {
        h = 23;
        m += 15;
    } else if (h!=0 && m<45) {
        h -= 1;
        m += 15;
    } else if (m>=45) {
        m -= 45;
    }

    cout << h << " " << m;

    return 0;
}
