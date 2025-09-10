#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int n,x, sum=0;
    stack<int> s;

    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> x;
        if(x==0) {
            s.pop();
        } else {
            s.push(x);
        }
    }
    
    while(!s.empty()) {
        sum += s.top();
        s.pop();
    }
    
    cout << sum;
    
    return 0;
}
