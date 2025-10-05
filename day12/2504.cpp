#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s; cin >> s;
    stack<int> stk; int temp=0, res=0;

    if(s.size()%2 != 0) {cout << 0; return 0;}

    for(int i=0; i<s.size(); i++) {

        if(s[i] == '(') stk.push(-1);
        else if(s[i] == '[') stk.push(-2); 

        else if(s[i] == ')') {
            if(stk.empty()) {cout << 0; return 0;} //top 호출하기 전 확인
            if(stk.top() == -1) { stk.pop(); stk.push(2); continue; }
            while(stk.top() != -1) { 
                if(stk.top()>0) temp += stk.top();
                else if(stk.top() == -2) {cout << 0; return 0;} //괄호쌍 성립 X
                stk.pop();
                if(stk.empty()) {cout << 0; return 0;} //괄호쌍 성립 X
            }
            stk.pop(); //스택 젤위에 -1 pop
            stk.push(2*temp);
            temp = 0;
        } 

        else if(s[i] == ']') {
            if(stk.empty()) {cout << 0; return 0;} 
            if(stk.top() == -2) { stk.pop(); stk.push(3); continue; }
            while(stk.top() != -2) { 
                if(stk.top()>0) temp += stk.top();
                else if(stk.top() == -1) {cout << 0; return 0;} //괄호쌍 성립 X
                stk.pop();
                if(stk.empty()) {cout << 0; return 0;} //괄호쌍 성립 X
            }
            stk.pop();
            stk.push(3*temp);
            temp = 0;
        }
    }

    while(!stk.empty()) {
        if(stk.top()>0) res += stk.top();
        stk.pop();
    }

    cout << res;
      
    return 0;
}