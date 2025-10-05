#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int h,m,t;
    cin >> h >> m >> t;

    if(m+t >= 60) {
        h += (m+t)/60;
        
        if(((m+t)%60) == 0) m=0;
        else m = (m+t)%60;
    } else m += t;

    if(h>=24) h -= 24;

    cout << h << " " << m;
    
    return 0;
}