#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    vector<bool> v(1000001, true);  // 모든 수를 소수(true)로 초기화

    for (int i = 2; i * i <= 1000000; i++) { 
        if (v[i]) {  // i가 소수이면
            for (int k = i * i; k <= 1000000; k += i) { // i의 배수들은 소수가 아니므로 false 처리
                v[k] = false;
            }
        }
    }


    int x;
    while(true) {
        cin >> x;
        if(x == 0) break;
        for(int j=3; j<=x/2; j++) {
            int n1 = j;
            int n2 = x-j;
            if(v[n1] && v[n2]) {
                cout << x << " = " << n1 << " + " << n2 << "\n";
                break;
            }
        }
    }

    return 0;
}