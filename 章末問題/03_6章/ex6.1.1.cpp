#include <bits/stdc++.h>
using namespace std;
int main(void){
    // step1 入力
    int x;
    cin >> x;

    // step2 変数の宣言
    // 今回は合計値を保存する「sum」を用意
    int sum = 0;

    // step3 繰り返し
    // for(int i = 1; i < x; i++)のように書いても同じ結果になる。
    for(int i = 0; i < x; i++){
        sum += i;
    }

    // step4 出力
    cout << sum << endl;

    return 0;
}