#include <iostream>
using namespace std;

const int MOD = 1234567891;

int main() {
    
    int n; 
    long long sum=0, r=1; string s;
    cin >> n;
    cin >> s;

    for(int i=0; i<n; i++) {
        char c = s[i];
        sum = (sum + (c - 'a' + 1) * r % MOD) % MOD;
        r = (r * 31) % MOD; //pow() 결과는 double 이어서 직접 계산이 정확함
    }

    cout << sum % MOD;

    return 0;
}
