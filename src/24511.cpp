#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n1, x; 
    cin >> n1;
    vector<int> v(n1), type(n1);
    for(int i=0; i<n1; i++) {
        cin >> x;
        type[i] = x;
    } 
    for(int i=0; i<n1; i++) {
        cin >> x;
        v[i] = x;
    } 

    deque<int> dq;
    for(int i=0; i<n1; i++) {
        if(type[i] == 0) dq.push_back(v[i]);
    }

    int n2;
    cin >> n2;
    for(int i=0; i<n2; i++) {
        cin >> x;
        dq.push_front(x);
        cout << dq.back() << " ";
        dq.pop_back();
    }

    return 0;
}