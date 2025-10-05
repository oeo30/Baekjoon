#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    int mul = a*b*c;
    string smul = to_string(mul);
    int cnt[10] = {0};

    for(int i=0; i<smul.length(); i++) {
        int digit = smul[i] - '0';  // 문자 '0'을 빼서 숫자로 변환
        cnt[digit]++;
    }

    for(int i=0; i<10; i++) {
        cout << cnt[i] << endl;
    }

    return 0;
}
