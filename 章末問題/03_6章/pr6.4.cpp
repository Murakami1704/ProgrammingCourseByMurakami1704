#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n, m;
    cin >> n >> m;

    int i = 0;
    while(m != 1){
        i++;
        m %= n;
    }

    cout << i << endl;

    return 0;
}