#include <iostream>
using namespace std;

int main() {
    int max = -1;
    int index = -1;
    for(int i=0; i<9; i++) {
        int n;
        cin >> n;
        if(max < n) {
            max = n; 
            index = i;
        } //{} 없이 쓰는건 ; 하나에만 가능
    }
    cout << max << endl;
    cout << index+1 << endl;

    return 0;
}
