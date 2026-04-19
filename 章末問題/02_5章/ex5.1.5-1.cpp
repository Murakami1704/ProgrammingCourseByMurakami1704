#include <bits/stdc++.h>
using namespace std;
int main(void){
    int y, d;
    cin >> y >> d;
    if(y >= 18){
        if(d == 1){
            cout << 2000 << endl;
        }
        else {
            cout << 3000 << endl;
        }
    }
    else {
        if(d == 1){
            cout << 500 << endl;
        }
        else {
            cout << 1000 << endl;
        }
    }

    return 0;
}