#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    set<string> alp = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    string s, temp1, temp2;
    int cnt=0, len=0;
    cin >> s;

    int i=0;
    while(i<s.length()) {
        temp1 = s.substr(i, 2);
        temp2 = s.substr(i, 3);

        if(alp.count(temp1)) {
            cnt++;
            len += 2;
            temp1 = "";
            i += 2;
        } else if(alp.count(temp2)) {
            cnt++;
            len += 3;
            temp2 = "";
            i += 3;
        } else {
            i += 1;
        }
    }
    
    cout << cnt + (s.length()-len) << endl;
    
    return 0;
}