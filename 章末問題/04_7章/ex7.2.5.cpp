#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    bool hantei = false;

    for(int i = 0; i < n; i++){
        if(a[i] == k){
            hantei = true;
        }
    }

    if(hantei){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}