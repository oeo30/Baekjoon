#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, target, cnt=0, temp;
    vector<int> v;

    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    cin >> target;
    for(int x : v) {
        if(x == target) cnt++;
    }
    
    cout << cnt;
    
    return 0;
}