#include <iostream>
#include <vector>
using namespace std;

bool check(string s) {
    vector<bool> alp(26,false);

    for(int i=0; i<s.size(); i++) {
        int index = s[i] - 'a';
        if(alp[index] == false) {
            alp[index] = true;
        } else {
            if(s[i-1] == s[i]) {
                continue;
            } else {
                return false;
            }
        }
    }
    return true;
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, cnt=0;
    string s;

    cin >> n;
    for(int i=0 ;i<n; i++) {
        cin >> s;
        if(check(s)) cnt++;
    }

    cout << cnt;

    return 0;
}