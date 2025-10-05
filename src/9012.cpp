#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> stk; 
    for(char c : s) {
        if(c == '(') { 
            stk.push(c);
        }
        else if(c == ')') { 
            if(stk.empty()) return false;
            stk.pop();
        }
    }
    return stk.empty();
}

int main() {
    string s; int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> s;
        if(isValid(s)) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}