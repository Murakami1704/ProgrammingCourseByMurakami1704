#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int max = 0;
    int now = 0;

    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            now++;
            if(now > max){
                max = now;
            }
        }
        else {
            now = 0;
        }
    }

    cout << max << endl;

    return 0;
}