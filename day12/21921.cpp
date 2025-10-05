#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, x, temp, sw=0;
    cin >> n >> x;
    vector<int> v;

    for(int i=0; i<n; i++) {
        cin >> temp;
        v.push_back(temp);
    }

    for(int i=0; i<x; i++) sw += v[i]; //sliding window initialization
    int max = sw;
    int cnt = 1;

    for(int i=x; i<n; i++) {
        sw -= v[i-x]; //윈도우 바로 앞에 있는거 빼주기
        sw += v[i];

        if(sw == max) {
            cnt++;
        } else if(sw > max) {
            max = sw;
            cnt = 1;
        }
    }

    if(max == 0) cout << "SAD";
    else cout << max << "\n" << cnt;

    return 0;
}