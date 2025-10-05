#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int n; int c, temp;
    stack<int> stk;
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> c;
        if(c==1) {
            cin >> temp;
            stk.push(temp);
        } else if (c==2) {
            if(!stk.empty()) {
                cout << stk.top() << "\n";
                stk.pop();
            } else {
                cout << -1 << "\n";
            }
        } else if(c==3) {
            cout << stk.size() << "\n";
        }
        else if(c==4) {
            if(stk.empty()) {
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else if(c==5) {
            if(!stk.empty()) {
                cout << stk.top() << "\n";
            } else {
                cout << -1 << "\n";
            }
        }
    }
    
    return 0;
}
