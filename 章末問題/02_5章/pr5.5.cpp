#include <bits/stdc++.h>
using namespace std;
int main(void){
    int y;
    cin >> y;

    if(y % 4 == 0){
        if(y % 100 == 0){
            if(y % 400 == 0){
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
        else {
            cout << "Yes" << endl;
        }
    }
    else {
        cout << "No" << endl;
    }

    /*
    ネストを使わない場合

    if(y % 400 == 0){
        cout << "Yes" << endl;
    }
    else if(y % 100 == 0){
        cout << "No" << endl;
    }
    else if(y % 4 == 0){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    */

    return 0;
}