#include <iostream>
#include <queue> 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int casenum;
    int n, pos, x, cnt=0; //개수, 궁금한 문서 위치, 중요도, 언제출력
    
    cin >> casenum;
    for(int i=0; i<casenum; i++) {
        cnt = 0;
        queue<pair<int,int>> q;
        priority_queue<int> pq;

        cin >> n >> pos;
        for(int j=0; j<n; j++) {
            
            cin >> x;
            pq.push(x);
            q.push({j,x});
        }

        while(!q.empty()) {
            int idx = q.front().first; //지금 확인하는 값
            int val = q.front().second;
            q.pop();

            if(val == pq.top()) {
                pq.pop();
                cnt++;
                if(idx == pos) {
                    cout << cnt << "\n";
                    break;
                }
            } else {
                q.push({idx,val});
            }
        }
    }

    return 0;
}
