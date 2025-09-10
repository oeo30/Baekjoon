#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int r, c, cnt=0;
    string s = "", temp;
    cin >> r >> c;
    cin.ignore(); //버퍼 비우기

    vector<vector<char>> matrix(r, vector<char>(c)); //행렬 크기 설정!!!!!
    unordered_set<string> strings;
    unordered_set<string> trimmed;

    //문자 행렬로 입력받기
    for(int i=0; i<r; i++) {
        getline(cin, temp);
        for(int j=0; j<c; j++) {
            matrix[i][j] = temp[j];
        }
    }

    //세로로 읽기
    for(int i=0; i<c; i++) {
        for(int j=0; j<r; j++) { 
            s += matrix[j][i];
        }
        strings.insert(s);
        s = "";
    }

    while(matrix.size() > 0) {
        for(string x : strings) {
            trimmed.insert(x.substr(1));  // 첫 글자 제외하고 잘라서 넣기
        }
        strings = trimmed;  

        //중복 확인
        if(strings.size() == c) { 
            cnt++;
            trimmed.clear();
            continue;
        } else {
            break;
        }
    }
    
    cout << cnt;
    
    return 0;
}