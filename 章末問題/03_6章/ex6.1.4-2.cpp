#include <bits/stdc++.h>
using namespace std;
int main(void){
    // step1 入力
    int x;
    cin >> x;

    // step2 繰り返し
    for(int i = 0; i < x; i++){
        if( i % 2 == 0 ){
            cout << i << endl;
        }
    }
}