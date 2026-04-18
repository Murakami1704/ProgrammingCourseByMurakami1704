#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n, m, k;

    double kane = n, risoku = m / 100.0 + 1;
    int tsuki = 0;

    while(kane < k){
        kane *= risoku;
        kane += n;
        tsuki++;
    }

    cout << tsuki << endl;

    return 0;
}