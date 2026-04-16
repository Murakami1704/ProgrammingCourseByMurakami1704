#include <bits/stdc++.h>
using namespace std;
int main(void){
    int ts1, te1, ts2, te2;
    cin >> ts1 >> te1 >> ts2 >> te2;

    // ts1 < te1とts2 < te2は確実なので、各用事の前後について調べればよい。
    // 1つ目の終わりより2つ目の始まりが遅かったらts1 < te1 < ts2 < te2となり、かぶっていない
    // または2つ目の終わりより1つ目の始まりが遅かったらts2 < te2 < ts1 < te1となり、かぶっていない
    if(te1 < ts2 || te2 < ts1){
        cout << "No" << endl;
    }
    else {
        cout << "Yes" << endl;
    }
}