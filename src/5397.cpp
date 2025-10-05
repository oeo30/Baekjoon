#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; string pw;
    stack<char> left, right;

    cin >> n;
    cin.ignore();
    
    for(int i=0; i<n; i++) {
        getline(cin, pw);
        for(char c : pw) {
            if(c == '<') {
                if(left.empty()) continue;
                else {
                    right.push(left.top());
                    left.pop();
                }
            } else if (c == '>') {
                if(right.empty()) continue;
                else {
                    left.push(right.top());
                    right.pop();
                }
            } else if(c == '-') {
                if(left.empty()) continue; // 아까랑 같은 조건! 꼭 추가해주자
                else left.pop();
            }
            else {
                left.push(c);
            }
        }
        while(!left.empty()) {
            right.push(left.top());
            left.pop();
        }
        while(!right.empty()) {
            cout << right.top();
            right.pop();
        }
        cout << "\n";
    }

    return 0;
}
