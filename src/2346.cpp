#include <iostream>
#include <deque>
#include <utility> //deque pair로 사용하기 위해 필요
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    deque<pair<int, int>> dq;
    int n, x, b, ith; 
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> x;
        dq.push_back({x,i+1});
    }

    while(!dq.empty()) {
        b = dq.front().first;
        ith = dq.front().second;
        cout << ith << " ";
        dq.pop_front();

        if(b>0) {
            for(int i=0; i<b-1; i++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        } else {
            b = -b;
            for(int i=0; i<b; i++) { //뒤로갈땐 -1 필요없음
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
    return 0;
}