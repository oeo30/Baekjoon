#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);\

    int a, b, v;
    cin >> a >> b >> v;
    int step = a-b;

    int day = (v-a)/step;
    if((v-a)%step==0) day++;
    else day+=2;
    cout << day;


    return 0;
}
