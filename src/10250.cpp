#include <iostream>
using namespace std;

int main() {

    int h, w, guest, n;
    cin >> n;

    for(int i=0; i<n; i++) { 

        cin >> h >> w >> guest;
        int floor = guest % h;
        int room = ((guest-1)/h)+1;
        if(floor == 0) floor = h;

        string f = to_string(floor);
        string r = to_string(room);
        if(room<10) r = "0"+to_string(room);
        
        cout << f+r << endl;
    }
    
    return 0;
}
