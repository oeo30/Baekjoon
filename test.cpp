#include <iostream>
#include <string>
#include <stack>
#include <cctype>
using namespace std;

int main() {

    stack<char> s;
    s.push('(');
    s.push('4');

    while(!s.empty()) {
        cout << s.top() << isdigit(s.top());
        s.pop();
    }
    
}
