#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n1, avg;
    cin >> n1 >> avg;
    cout << 2*avg - n1;

    return 0;
}