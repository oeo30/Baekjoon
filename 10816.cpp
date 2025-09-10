#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int n1, n2, x; 
    unordered_map<int, int> freq;

    cin >> n1;
    for(int i=0; i<n1; i++) {
        cin >> x;
        freq[x]++;
    }

    cin >> n2;
    for(int i=0; i<n2; i++) {
        cin >> x;
        cout << freq[x] << " ";
    }

    return 0;
}
