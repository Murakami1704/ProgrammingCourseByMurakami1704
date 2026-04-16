#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;


    int maxVal = 0, minVal = 10000000;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a > maxVal){
            maxVal = a;
        }

        if(a < minVal){
            minVal = a;
        }
    }

    // elseで繋げたら数字が1個だけの時こまる

    cout << maxVal << endl;
    cout << minVal << endl;

    return 0;
}