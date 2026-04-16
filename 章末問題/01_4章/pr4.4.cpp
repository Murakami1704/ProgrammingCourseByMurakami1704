#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;

    cout << ( n + 1 ) % 2 << endl;

    // nが0の時は+1して1、それを2で割った余りは1になる。
    // nが1の時は+1して2、それを2で割った余りは0になる。

    return 0;
}