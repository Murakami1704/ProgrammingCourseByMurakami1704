#include <bits/stdc++.h>
using namespace std;
int main(void){
    int s;
    cin >> s;

    if(s >= 80 && s <= 100){
        cout << "優" << endl;
    }
    else if(s >= 70){ // 上の条件に外れている時点で79以下は確定なので上限に関する条件は設定しなくてよい
        cout << "良" << endl;
    }
    else if(s >= 60){
        cout << "可" << endl;
    }
    else {
        cout << "不可" << endl;
    }

    return 0;
}