#include <iostream>
using namespace std;

bool isPrime(int n) {
    if(n<2) {
        return false;
    } else {
        for(int i=2; i*i<=n; i++) {
            if(n%i == 0) return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, x;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x;
        for(int j=x/2; j<x; j++) {
            int n1 = j;
            int n2 = x-j;
            if(isPrime(n1) && isPrime(n2)) {
                cout << n2 << " " << n1 << "\n";
                break;
            }
        }
    }


    
    return 0;
}