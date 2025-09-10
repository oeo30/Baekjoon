#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(string a, string b) {
    if(a.length() != b.length()) return a.length() < b.length(); //길이부터 비교
    return a < b; //그다음 알파벳
}


int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int n; 
    cin >> n;
    vector<string> words(n); //sort 쓰려면 벡터로~
    
    for(int i=0; i<n; i++) {
        cin >> words[i];
    }

    sort(words.begin(), words.end(), cmp);
    words.erase(unique(words.begin(), words.end()), words.end()); //중복 제거

    for(int i=0; i<words.size(); i++) { //중복 제거 후에는 .size()
        cout << words[i] << "\n";
    }
    
    return 0;
}
