#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    priority_queue<int> pq;

    int n, m, h1, h2; 
    
    cin >> n >> h1 >> m;

    for(int i=0; i<n; i++) {
        cin >> h2;
        pq.push(h2);
    }


    if(pq.top() < h1) {
        cout << "YES" << "\n";
        cout << 0;
        return 0;
    } 

    for(int i=0; i<m; i++) {
        h2 = pq.top();
        pq.pop();
        h2 = int(h2/2);
        if(h2 < 1) h2 = 1;
        pq.push(h2);
        if(pq.top() < h1) {
            cout << "YES" << "\n";
            cout << i+1;
            break;
        } 
    }   
    
    if(pq.top() >= h1) {
        cout << "NO" << "\n";
        cout << pq.top();
    }

    
    return 0;
}