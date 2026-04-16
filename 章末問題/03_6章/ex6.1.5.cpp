#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n, m, k;
    cin >> n >> m >> k;

    for(int i = m; i > n; i--){
        if(i % k == 0){
            cout << i << endl;
        }
    }

    return 0;
}