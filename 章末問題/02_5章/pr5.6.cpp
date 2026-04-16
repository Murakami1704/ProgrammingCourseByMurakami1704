#include <bits/stdc++.h>
using namespace std;
int main(void){
    int y, m, d;
    cin >> y >> m >> d;

    int t = y * 10000 + m * 100 + d;

    // 普通にif文を用いるとエゲツナイことになるので...。
    // 日付を1つの変数として扱うことにより、楽に判別を行う。

    if(t >= 18680125 && t <= 19120729){
        cout << "明治" << endl;
    }
    else if(t >= 19120730 && t <= 19261224){
        cout << "大正" << endl;
    }
    else if(t >= 19261225 && t <= 19890107){
        cout << "昭和" << endl;
    }
    else if(t >= 19890108 && t <= 20190430){
        cout << "平成" << endl;
    }
    else if(t >= 20190501){
        cout << "令和" << endl;
    }
    else {
        cout << -1 << endl;
    }

    return 0;
}