#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int n, idx;
    cin >> n;

    int cnt[10001] = {0};

    for(int i=1; i<=n; i++) {
        cin >> idx;
        cnt[idx]++;
    }
    for(int i=1; i<=10000; i++) {
        for(int j=1; j<= cnt[i]; j++) {
            cout << i << "\n";
        }
    }

    
    return 0;
}
