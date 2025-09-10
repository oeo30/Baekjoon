#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    map<int, int, greater<int>> m;
    vector<pair<int, int>> v;

    int n, c, x;
    cin >> n >> c;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (m.count(x) == 0) {
            v.push_back({x, 0});  // 처음 등장한 key만 v에 저장
        }
        m[x]++;
    }

    // m의 빈도수를 v에 반영
    for (auto& p : v) {
        p.second = m[p.first];
    }

    // second 기준 내림차순, 등장 순서 유지
    stable_sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    });

    for (auto p : v) {
        for (int i = 0; i < p.second; i++) {
            cout << p.first << " ";
        }
    }

    return 0;
}
