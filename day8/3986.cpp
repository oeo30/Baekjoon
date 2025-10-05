#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    string word; int cnt = 0;
    stack<char> s;
    
    for(int i=0; i<n; i++) {
        cin >> word;
        if(word.size()%2 != 0) continue;

        for(int j=0; j<word.size(); j++) {
            if(s.empty()) s.push(word[j]);
            else if(s.top() == word[j]) s.pop();
            else s.push(word[j]);
        }
        if(s.empty()) cnt++;
        else while(!s.empty()) s.pop();
    }

    cout << cnt;

    return 0;
}