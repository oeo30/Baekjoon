#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    queue <int> q;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        q.push(i+1);
    }

    while(q.size()>1) {
        cout << q.front() << " ";
        q.pop();
        int x = q.front(); //만약에 원소가 하나면 여기서 런타임 에러 남
        q.pop();
        q.push(x);
    }

    if(!q.empty()) cout << q.front();

    return 0;
}