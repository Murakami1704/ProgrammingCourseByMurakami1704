#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;

    if(n == 0){
        cout << "0" << endl;
    }
    else if(n > 0){
        cout << "正の数" << endl;
    }
    else if(n < 0){
        cout << "負の数" << endl;
    }

    return 0;
}