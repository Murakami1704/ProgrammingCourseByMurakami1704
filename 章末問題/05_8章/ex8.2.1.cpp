#include <bits/stdc++.h>
using namespace std;
int max_ori(int a, int b){
    if(a > b){
        return a;
    }
    else {
        return b;
    }
}

int main(void){
    int a, b;
    cin >> a >> b;

    cout << max_ori(a, b) << endl;

    return 0;
}