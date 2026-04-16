#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int kisuSum = 0;
    int gusuSum = 0;

    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            gusuSum += a[i];
        }
        else {
            kisuSum += a[i];
        }
    }

    cout << gusuSum << endl;
    cout << kisuSum << endl;

    return 0;
}