#include <bits/stdc++.h>
using namespace std;
int main(void){
    int x;
    cin >> x;


    int p = 0;

    while(x != 1){
        x /= 2;
        p++;
    }

    cout << p << endl;

    return 0;
}