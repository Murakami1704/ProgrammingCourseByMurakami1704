#include <bits/stdc++.h>
using namespace std;
int main(void){
    // step1 入力
    int n, m;
    cin >> n >> m;

    // step2 変数の宣言
    // 今回は合計値を保存する「sum」を用意
    int sum = 0;

    // step3 繰り返し
    // 条件式のところはi <= mにしないと最後mが足されない。
    for(int i = n; i <= m; i++){
        sum += i;
    }

    // step4 出力
    cout << sum << endl;

    return 0;
}