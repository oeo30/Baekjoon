#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, n1, n2;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> n1 >> n2;
        cout << "Case #" << i+1 << ": " << n1+n2 << endl;
    }

    return 0;
}