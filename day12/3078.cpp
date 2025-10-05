#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, k;
    long long cnt=0;
    string x;
    cin >> n >> k;
    vector<int> v, len(21); 

    for(int i=0; i<n; i++) {
        cin >> x;
        v.push_back(x.size());
    }

    //sliding window initialization
    for(int i=0; i<k+1; i++) len[v[i]]++;
    for(int i=0; i<21; i++) {
        if(len[i] == 2) cnt++;
        else if(len[i] > 2) cnt += (len[i]*(len[i]-1))/2;
    }

    for(int i=k+1; i<n; i++) {
        len[v[i-k-1]]--;
        if(len[v[i]] >= 1) cnt += len[v[i]]; //1명 추가되면 원래 있던 애들이랑 전부 쌍 이루니까
        len[v[i]]++;
    }

    cout << cnt;
    
    return 0;
}