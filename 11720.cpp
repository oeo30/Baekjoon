#include <iostream>
using namespace std;

int main() {
    int n; int sum = 0;
    char c;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> c;
        sum += c - '0'; //c는 char형이므로 아스키코드 값 '0' 빼주기
    }
    cout << sum;
}
