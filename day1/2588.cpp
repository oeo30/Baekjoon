#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int num1, num2;
    cin >> num1;
    cin >> num2;

    int d1 = num2%10;
    int d2 = (num2/10)%10;
    int d3 = num2/100;

    cout << num1*d1 << "\n";
    cout << num1*d2 << "\n";
    cout << num1*d3 << "\n";
    cout << num1*num2 << "\n";
    
    return 0;
}
