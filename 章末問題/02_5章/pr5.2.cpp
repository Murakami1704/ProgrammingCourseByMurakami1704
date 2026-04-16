#include <bits/stdc++.h>
using namespace std;
int main(void){
    int a, b, c;
    cin >> a >> b >> c;

    int max = 0;

    // aとbの大きさを比較し、大きい方を「max」に保存
    if(a > b){
        max = a;
    }
    else {
        max = b;
    }

    // 「aとbの大きいほう」と「c」の大きさを比較し、大きい方を「max」に保存
    if(c > max){
        max = c;
    }

    // 「max」が3つの値の一番大きな値になっているはずなので、そのまま出力
    cout << max << endl;

    return 0;
}