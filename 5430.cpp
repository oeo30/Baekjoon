#include <iostream>
#include <deque>
#include <string>
#include <algorithm> //reverse 사용 위해
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int testcase, n;
    string func, nums, output;
    bool print, reversed;
    deque<int> dq;

    cin >> testcase;
    for(int i=0; i<testcase; i++) {
        //초기화
        dq.clear();
        print = true;
        reversed = false;

        //입력
        cin >> func;
        cin >> n;
        cin.ignore(); //getline 앞에는 무조건
        getline(cin, nums);

        if(n != 0) { //배열 크기 0 아닐때만 입력
            string num = "";
            for (char c : nums) {
                if (isdigit(c)) {
                    num += c;  // 숫자 누적
                } else if (!num.empty()) {
                    dq.push_back(stoi(num));  // 누적된 숫자를 정수로 변환해서 넣기
                    num = "";  // 초기화
                }
            }
            
        }

        for(char c : func) {
            if(c == 'R') {
                reversed = !reversed;
            } else if(c == 'D') {
                if(dq.empty()) {
                    print = false;
                    break;
                } else {
                    if(reversed == false){
                        dq.pop_front();
                    } else {
                        dq.pop_back();
                    }
                    
                }
            }
        }

        if(print) {
            output = "[";
            if(reversed == true) {
                reverse(dq.begin(), dq.end());
            }
            for(int x : dq) {
                output += to_string(x)+",";
            }
            if(output.length() > 1) {
                output.pop_back(); //string 마지막 글자 제거
            }
            output += "]";
            cout << output << endl;
        } else {
            cout << "error" << endl;
        }
        
    }
    
    return 0;
}