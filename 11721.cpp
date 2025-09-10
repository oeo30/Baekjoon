#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string str;
    cin >> str;
    int len = str.length();

    for(int i=0; i<len; i+=10) {
        cout << str.substr(i, 10) << endl;
    }

    return 0;
}