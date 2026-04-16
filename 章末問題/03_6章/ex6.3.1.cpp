#include <bits/stdc++.h>
using namespace std;
int main(void){
    // step1 入力
    int x;
    cin >> x;

    // step2 変数の宣言
    // 今回は一時変数「i」と合計値を保存する「sum」を用意
    int i = 1;
    int sum = 0;

    // step3 繰り返し
    while(i < x){
        sum += i;
        i++;
    }

    /*
    while(true){
        if(i >= x){
            break;
        }
        sum += i;
        i++;
    }
    
    と書いても同じ答えになる。
    */

    // step4 出力
    cout << sum << endl;

    return 0;
}