#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int n;
    float sum = 0, max = -1;

    cin >> n;
    int score[n];
    for(int i=0; i<n; i++) {
        cin >> score[i];
        if(score[i]>max) max=score[i];
    }

    for(int i=0; i<n; i++) {
        sum += (score[i]/max)*100;
    }    
    cout << sum/n;

    return 0;
}
