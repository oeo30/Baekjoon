#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, x, y, cnt=0; cin >> n;
    stack<int> s;

    for(int i=0; i<n; i++) {
        cin >> x >> y;
        
        while(!s.empty() && s.top() >= y) {
            if(s.top() != y) cnt++;
            s.pop();
        }
        s.push(y);
    }

    while(!s.empty()) {
        if(s.top() != 0) cnt++;
        s.pop();
    }

    cout << cnt;

    return 0;
}