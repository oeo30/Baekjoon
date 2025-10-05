#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, x, idx=1;; cin >> n;
    string ans = "";
    stack<int> s; s.push(0);

    for(int i=0; i<n; i++) {
        cin >> x;
        while(s.top() < x) {
            s.push(idx++);
            ans += "+\n";
        } 
        if(s.top() > x) {
            cout << "NO";
            return 0;

        } else if(s.top() == x) {
            s.pop();
            ans += "-\n";
        }
    }
      cout << ans;
      
    return 0;
}