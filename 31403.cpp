#include <iostream>
using namespace std;

int main() {

    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << a+b-c << endl;
    cout << stoi(to_string(a)+to_string(b))-c; //stoi <-> to_string

    return 0;
}
