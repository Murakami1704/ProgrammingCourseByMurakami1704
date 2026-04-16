#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n = 0;
    cin >> n;

    // 外側のfor文と内側のfor文で宣言する変数(iとj)は別々にしよう
    // また、出力にも注意。
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << i * j << " ";
        }
        cout << endl;
    }

    return 0;
}