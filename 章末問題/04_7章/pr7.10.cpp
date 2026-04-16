#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i] == b[i]){
            cout << a[i] << " ";
        }
    }

    cout << endl;

    return 0;
}