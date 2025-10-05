#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    priority_queue<long long , vector<long long>, greater<long long>> pq;

    int n, m;
    long long temp, a, b, c;

    cin >> n >> m;

    for(int i=0; i<n; i++) {
        cin >> temp;
        pq.push(temp);
    }

    for(int i=0; i<m; i++) {
        a = pq.top();
        pq.pop();
        b = pq.top();
        pq.pop();
        c = a+b;
        pq.push(c);
        pq.push(c);
    }
    
    long long sum = 0;
    while(!pq.empty()) {
        sum += pq.top();
        pq.pop();
    }

    cout << sum;
    
    return 0;
}