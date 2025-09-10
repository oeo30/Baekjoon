#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;  
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;  
    }
    return true;  
}

int main() {

    int n = -1;
    int cnt = 0;

    while(true) {
        cnt = 0;
        cin >> n;
        if(n == 0) break;
        for(int i=n+1; i<=n*2; i++) {
            if(isPrime(i)) cnt++;
        }
        cout << cnt << "\n";
    }

    return 0;
}
