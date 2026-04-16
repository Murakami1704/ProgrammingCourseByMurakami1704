#include <bits/stdc++.h>
using namespace std;
int main(void){
    int x;
    cin >> x;

    if(x == 0){
        cout << "Zero" << endl;
    }
    else if (x % 2 == 0){
        cout << "even" << endl;
    }
    else if (x % 2 == 1){
        cout << "odd" << endl;
    }

    /*
    このとき、0判別は最初に行う必要がある。

    もし、0判別が後半になると、先に偶奇が判別され、そのあとにゼロ判別が発生する。
    ゼロを2で割った余りは0であり、偶数として処理される。
    なので、もし0判別を後ろに書いてしまうと、出力が

    even
    
    となってしまう。
    これを防ぐため、最初にゼロ判別をしている。
    
    */

    return 0;
}