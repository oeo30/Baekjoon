#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    char ch1, ch2, ch3;
    for(int i=0; i<n; i++) {
        cin.ignore();
        ch1 = cin.get();
        ch2 = cin.get();
        ch3 = cin.get();

        cout << int(ch1) + int(ch3) - '0' - '0' << endl;

    }

    return 0;
}