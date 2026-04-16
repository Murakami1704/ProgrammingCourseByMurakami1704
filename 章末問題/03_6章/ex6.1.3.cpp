#include <bits/stdc++.h>
using namespace std;
int main(void){
    // step1 入力
    int q;
    cin >> q;

    // step2 変数の宣言
    // 答えを保存するstrという変数を宣言し、無で初期化する。
    string str = "";

    // step3 繰り返し
    for(int i = 0; i < q; i++){
        // for文の中でも変数を宣言できる。
        // 今回は1or2or3の数字と文字列「s」を保存する必要があるため2つ用意。
        int temp;
        string s;

        // 入力の時、cin >> temp >> s;のように書くと、変なことが起こる。
        // tempが1や2の時はいいが、3の時は入力するものがない。
        // その時、次の行のtempになりうる値が入力される。
        cin >> temp;

        if(temp == 1){
            cin >> s;
            str = str + s;
        }
        else if(temp == 2){
            cin >> s;
            str = s + str;
        }
        else if(temp == 3){
            cout << str << endl;
        }
    }

    return 0;
}