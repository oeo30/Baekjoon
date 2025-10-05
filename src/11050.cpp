#include <iostream>
using namespace std;

long long factorial(int n) {
    long long ret = 1;
    for(int i=0; i<n; i++) {
        ret *= i+1;
    }
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    cout << factorial(n) / (factorial(k) * factorial(n - k));

    return 0;
}
