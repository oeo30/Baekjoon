#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

struct cmp {
    bool operator()(int a, int b) {
        if (abs(a) == abs(b)) return a > b;  // 절댓값 같으면 작은 수 우선
        return abs(a) > abs(b);             
    }
};

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    priority_queue<int, vector<int>, cmp> pq; //우선순위 내가 지점

    int n,x; 
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> x;
        if(x == 0) {
            if(pq.empty()) {
                cout << 0 << "\n";
            } else {
                //작은거 출력하고 제거
                cout << pq.top() << "\n";
                pq.pop();
            }
            
        } else {
            pq.push(x);
        }
    }


    
    return 0;
}