#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    queue<int> q;
    string c; int n, x;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> c;
        if(c == "push") {
            cin >> x;
            q.push(x);
        } else if(c == "pop") {
            if(q.empty()) cout << -1 << "\n";
            else {
                cout << q.front() << "\n";
                q.pop();
            }
        } else if(c == "size") {
            cout << q.size() << "\n";
        } else if(c == "empty") {
            if(q.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        } else if(c == "front") {
            if(q.empty()) cout << -1 << "\n";
            else cout << q.front() << "\n";
        } else if(c == "back") {
            if(q.empty()) cout << -1 << "\n";
            else cout << q.back() << "\n";
        }
    }
    
    return 0;
}