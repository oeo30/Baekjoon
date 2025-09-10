#include <iostream>
using namespace std;

int main() {
    string s;
    int alp[26];

    for(int i=0; i<26; i++) alp[i] = -1; //배열 초기화

    cin >> s;

    for(int i=0; i<s.length(); i++) {
        int temp = int(s[i]) - 'a';
        if(alp[temp] == -1) alp[temp] = i;
    }

    for(int i=0; i<26; i++) cout << alp[i] << ' ';
    
    return 0;
}
