#include <iostream>
#include <string>
using namespace std;

int main() {

    int n, times;
    string s;

    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> times >> s;
        for(int j=0; j<s.length(); j++) {
            string temp(times, s[j]);
            cout << temp;
        }
        cout << endl;
    }

    return 0;
}
