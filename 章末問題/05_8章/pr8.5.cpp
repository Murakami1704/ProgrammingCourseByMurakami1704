#include <bits/stdc++.h>
using namespace std;
int calc_fun(int num){
    int t, a;
    cin >> t;
    if(t == 1){
        cin >> a;
        num += a;
    }
    else if(t == 2){
        cin >> a;
        num -= a;
    }
    else if(t == 3){
        cin >> a;
        num *= a;
    }
    else if(t == 4){
        cin >> a;
        num /= a;
    }
    else if(t == 5){
        cin >> a;
        num %= a;
    }
    else if(t == 6){
        cout << num << endl;
    }

    return num;
}


int main(void){
    int q;
    cin >> q;

    int num = 0;

    for(int i = 0; i < q; i++){
        num = calc_fun(num);
    }

    return 0;
}