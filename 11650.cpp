#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<int, int>&a, const pair<int, int>&b) {
    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int>> v(n);

    for(int i=0; i<n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    
    sort(v.begin(), v.end(), cmp);

    for (auto x: v) cout << x.first << " " << x.second << "\n";
    
    return 0;
}
