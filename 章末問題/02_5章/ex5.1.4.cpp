#include <bits/stdc++.h>
using namespace std;
int main(void){
    int x;
    cin >> x;

    if(x %= 3){
        cout << "Fizz";
    }
    if(x %= 5){
        cout << "Buzz";
    }

    cout << endl;

    /*
    「else」ではないため、これらのif文は無条件で全部判別されることに注意。
    
    xが15の倍数の時、3の倍数かどうかの判別に引っかかり、Fizzを出力。
    改行しない状態で、5の倍数かどうかの判別に引っかかり、Buzzを出力する。
    改行やスペースを挟まないため、「FizzBuzz」を出力できる。

    別解
    if(x % 15 == 0){
        cout <<"FizzBuzz" << endl;
    }
    else if(x % 3 == 0){
        cout << "Fizz" << endl;
    }
    else if(x % 5 == 0){
        cout << "Buzz" << endl;
    }

    */

    return 0;
}