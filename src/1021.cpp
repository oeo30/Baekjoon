#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    deque<int> dq;
    int n, x, size, cnt=0, right, left; 

    cin >> size >> n;

    for(int i=0; i<size; i++) { //덱에 숫자들 다 넣어줌
        dq.push_back(i+1);
    }

    for(int i=0; i<n; i++) {
        cin >> x;
        for(int j=0; j<dq.size(); j++) {
            if(dq[j] == x) { //입력마다 target 위치 찾기
                right = j; //오른쪽 순회
                left = dq.size() - right; //왼쪽 순회
                break;
            }
        }

        if(right <= left) { 
            while(1) {
                if(dq.front() == x) { //dq.front가 target이면 pop하고 다음으로 넘어가
                    dq.pop_front();
                    break;
                }
                dq.push_back(dq.front()); //커서를 움직이는게 아니라 값을 옮기면 더 쉬움
                dq.pop_front();
                cnt++;
            }
        } else if(right > left) {
            while(1) {
                if(dq.front() == x) {
                    dq.pop_front();
                    break;
                }
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
        }

    }

    cout << cnt;


    return 0;
        

    }


    
    
