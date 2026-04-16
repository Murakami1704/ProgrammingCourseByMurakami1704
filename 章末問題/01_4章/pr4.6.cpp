#include <bits/stdc++.h>
using namespace std;
int main(void){
    int a, b;
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << a << " " << b << endl;
    /*
    aとbをそれぞれdとcにすることについて考える。
    1行目をc = a + bとしたとき、
    2行目はd = c - bとなる。
    2行目時点でaは元のaではなく、初期におけるa+bが入っているからだ。

    この式より、d = a + b - b = aとなる。

    この時、3行目はc = c - dとなる。
    aもbもすでに、初期においてそれぞれa + b、aになっている。
    従って、この式を計算するとc = bとなる。

    この時点で少し難しいが、ここまで理解できたら、処理内容の3行は理解できるはずだ。

    */

    return 0;
}