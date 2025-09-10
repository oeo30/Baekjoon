#include <iostream>
using namespace std;

int main() {
    int s, m, l, xl, xxl, xxxl;
    int t, p, n;
    
    cin >> n;
    cin >> s >> m >> l >> xl >> xxl >> xxxl;
    cin >> t >> p;

    int cnt = 0;
    int tshirt[6] = {s, m, l, xl, xxl, xxxl};

    for(int i=0; i<6; i++){
        if(tshirt[i] == 0) continue;
        else if(tshirt[i]%t == 0) cnt += tshirt[i]/t;
        else cnt += tshirt[i]/t+1;
    }
    
    cout << cnt << endl;
    cout << n/p << " " << n%p;

    return 0;
}
