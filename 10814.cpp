#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<int, string>&a, const pair<int, string>&b) {
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, string>> people(n);

    for (int i = 0; i < n; i++) {
        cin >> people[i].first >> people[i].second;
    }

    stable_sort(people.begin(), people.end(), cmp);

    for (auto x: people) cout << x.first << " " << x.second << "\n";

    return 0;
}
