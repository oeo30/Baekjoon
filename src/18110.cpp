#include <iostream>
#include <deque>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int n, x;
    double ave=0;
    deque<int> dq;

    cin >> n;

    if(n==0) {
        cout << 0;
        return 0;
    }

    int cut = round(n*0.15);

    for(int i=0; i<n; i++) {
        cin >> x;
        dq.push_back(x);
    }

    sort(dq.begin(), dq.end());

    for(int i=0; i<cut; i++) {
        dq.pop_front();
        dq.pop_back();
    }

    for(int nn : dq) {
        ave += nn;
    }

    int total = dq.size();
    cout << round(ave/total);

    return 0;
}
