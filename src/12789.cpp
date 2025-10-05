#include <iostream>
#include <stack>
#include <queue>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int n, x; stack<int> s1, s2; //s1이 간식받는곳 s2는 한명씩 서는 곳 s3은 현재
    queue<int>s3;
    int curmin = 1;

    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x;
        s3.push(x);
    }

    while(!(s3.empty()) || !(s2.empty())) {
        if(!s3.empty() && s3.front() == curmin) {
            s1.push(s3.front());
            s3.pop();
            curmin++;
        } else if(!s2.empty() && s2.top() == curmin) { //stack의 top 호출할땐 무조건 empty 확인
            s1.push(s2.top());
            s2.pop();
            curmin++;
        } else if (!s3.empty()) { //조건에서 s3 empty여도 실행 가능하니까@!!!! 조건 추가해주기
            s2.push(s3.front());
            s3.pop();
        } else {
            break; // 둘 다 불가능하면 탈출
        }
    }

    if(s1.size() == n) {
        cout << "Nice";
    } else {
        cout << "Sad";
    }
    
    return 0;
}
