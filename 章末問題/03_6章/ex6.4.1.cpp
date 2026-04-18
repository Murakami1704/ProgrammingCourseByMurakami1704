#include <bits/stdc++.h>
using namespace std;
int main(void){
    int x;
    cin >> x;

    switch(x){
        case 1:
            cout << "ラーメン 1,200円" << endl;
            break;
        case 2:
            cout << "ハンバーグ 700円" << endl;
            break;
        case 3:
            cout << "サラダ 300円" << endl;
            break;
        case 4:
            cout << "スープ 100円" << endl;
            break;
        default:
            cout << "-1" << endl;
            break;
    }

    return 0;
}