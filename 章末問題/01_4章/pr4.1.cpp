#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;

    int ans = n * 1.1;
    cout << ans << endl;

    // 出力にそのまま「n * 1.1」と書いてしまうと
    // 答えがdouble型になり、少数で出力される
    // 問題は切り捨てである必要があるので
    // 個別にint型の変数を宣言し、そこに格納している。

    return 0;
}