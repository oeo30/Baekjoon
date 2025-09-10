#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> stk; 
    for(char c : s) {
        if(c == '(' or c == '[') { //push는 그냥 해주는데
            stk.push(c);
        }
        else if(c == ')') { //pop은 바로 위에거 확인하고! 
            if(stk.empty() || stk.top() != '(') return false; //젤 최근 push가 ( 아니면 false
            stk.pop();
        }
        else if(c == ']') {
            if(stk.empty() || stk.top() != '[') return false;
            stk.pop();
        }
    }
    return stk.empty();
}


int main() {
    string s;
    while(getline(cin, s)) {
        if(s == ".") break;
        if(isValid(s)) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }
}