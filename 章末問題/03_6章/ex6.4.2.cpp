#include <bits/stdc++.h>
using namespace std;
int main(void){
    int x;
    cin >> x;

    switch(x){
        case 1:
            cout << "ラーメン 1,200円" << endl;
        case 2:
            cout << "ハンバーグ 700円" << endl;
        case 3:
            cout << "サラダ 300円" << endl;
        case 4:
            cout << "スープ 100円" << endl;
        default:
            cout << "-1" << endl;
    }

    return 0;
}