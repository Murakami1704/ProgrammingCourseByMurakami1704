#include <bits/stdc++.h>
using namespace std;
int main(void){
    int y, d;
    cin >> y >> d;
    if(d == 1){
        if(y >= 18){
            cout << 2000 << endl;
        }
        else {
            cout << 500 << endl;
        }
    }
    else {
        if(y >= 18){
            cout << 3000 << endl;
        }
        else {
            cout << 1000 << endl;
        }
    }

    return 0;
}