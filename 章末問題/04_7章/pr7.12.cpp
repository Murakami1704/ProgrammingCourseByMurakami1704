#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int sum = 0;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            sum += a[i] * b[i];
        }
    }

    cout << sum << endl;

    return 0;
}

/*
できる人は因数分解しよう。
因数分解すると、
(a[0] + a[1] + ... + a[n-1])(b[0] + b[1] + ... + b[n-1])
となる。
そのため、
suma = a[0] + a[1] + ... + a[n-1];
sumb = b[0] + b[1] + ... + b[n-1];
を求めて、
suma * sumbを出力するとより効率の良いプログラムになる。
*/