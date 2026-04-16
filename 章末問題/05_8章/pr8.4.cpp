#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int t;
        cin >> t;
        if(t == 1){
            int l, r;
            cin >> l >> r;
            swap(a[l-1], a[r-1]);
        }
        else if(t == 2){
            int l;
            cin >> l;
            cout << a[l-1];
        }
    }

    return 0;
}