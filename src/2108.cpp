#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int median, mode, range, mean; 

    int n, x;
    map<int, int> freq; // key: 숫자, value: 빈도

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        freq[x]++; //key는 x로, value는 +1
    }

    //range
    int min_key = freq.begin()->first;
    int max_key = freq.rbegin()->first;
    range = max_key - min_key;

    //mode
    vector<int> modes;
    int max_freq = 0;
    
    for (auto p : freq) {
        if (p.second > max_freq) {
            max_freq = p.second;
            modes.clear();
            modes.push_back(p.first);
        } else if (p.second == max_freq) {
            modes.push_back(p.first);
        }
    }

    sort(modes.begin(), modes.end());
    if (modes.size() > 1) mode = modes[1];
    else mode = modes[0];

    //median
    int total = 0;
    for (auto p : freq) total += p.second;
    
    int mid_idx = total / 2; // 중앙 위치
    int count = 0;
    
    for (auto p : freq) {
        count += p.second;
        if (count > mid_idx) {
            median = p.first;
            break;
        }
    }

    //average
    int sum = 0, cnt = 0;
    for (auto p : freq) {
        sum += p.first * p.second; // 값 × 빈도
        cnt += p.second;          // 전체 개수
    }
    mean = round((double)sum / cnt);

    cout << mean << "\n";
    cout << median << "\n";
    cout << mode << "\n";
    cout << range << "\n";


    return 0;

}
