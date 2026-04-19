#include <bits/stdc++.h>
using namespace std;
double decimal_max(double a, double b){
    int ai = a;
    int bi = b;
    a -= ai;
    b -= bi;

    if(a > b){
        return a + ai;
    }
    else {
        return b + bi;
    }
}

int main(void){
    double a, b;
    cin >> a >> b;

    cout << decimal_max(a, b) << endl;

    return 0;
}